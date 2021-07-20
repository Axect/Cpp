#include <vector>
#include <iostream>

struct Leaf {};
struct Branch {};

class OakTree {
public:
    auto& operator=(const OakTree& other) {
        leafs_ = other.leafs_;
        // branches의 복사가 예외를 발생시키면 leafs만 복사되고 OakTree는 무효
        branches_ = other.branches_;
        return *this;
    }

    std::vector<Leaf> leafs_;
    std::vector<Branch> branches_;
};

auto save_to_disk(const std::vector<OakTree>& trees) {
    std::cout << "Save to Disk!" << std::endl;
}

auto oaktree_func() {
    auto tree0 = OakTree{std::vector<Leaf>{1000}, std::vector<Branch>{100}};
    auto tree1 = OakTree{std::vector<Leaf>{50}, std::vector<Branch>{5}};

    try {
        tree0 = tree1;
    } catch(const std::exception& e) {
        save_to_disk({tree0, tree1});
    }
}

int main() {
    oaktree_func();
}