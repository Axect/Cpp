#include <iostream>

using namespace std;

struct node {
    int key_value;
    int index;
    node* p_left;
    node* p_right;
};

node* insert(node* p_tree, int key);
node* search(node* p_tree, int key);
void destroyTree(node* p_tree);
node* remove(node* p_tree, int key);

int main() {
    node* A = insert(NULL, 10);
    
    node* B = insert(NULL, 5);
    B = insert(A,5);

    node* C = insert(NULL, 7);
    C = insert(B, 7);
    C = insert(A, 7);

    node* D = search(C, 7);
    cout << D->index << endl;

    return 0;
}

node* insert(node* p_tree, int key) {
    // NULL -> Create
    if (p_tree==NULL) {
        node* p_new_tree = new node;
        p_new_tree->p_left = NULL;
        p_new_tree->p_right = NULL;
        p_new_tree->index=0;
        p_new_tree->key_value = key;
        return p_new_tree;
    }

    // key < key_value : insert left
    // if left is NULL -> create new & point this by left
    // right too.
    if (key < p_tree->key_value) {
        p_tree->p_left = insert(p_tree->p_left, key);
        p_tree->index++;
    } else {
        p_tree->p_right = insert(p_tree->p_right, key);
        p_tree->index++;
    }

    return p_tree;
}

node* search(node* p_tree, int key) {
    if (p_tree == NULL) {
        return NULL;
    } else if (key == p_tree->key_value) {
        return p_tree;
    } else if (key < p_tree->key_value) {
        return search(p_tree->p_left, key);
    } else {
        return search(p_tree->p_right, key);
    }
}