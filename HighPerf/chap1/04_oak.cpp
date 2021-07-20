#include <vector>
#include <iostream>

struct Leaf {};
struct Branch {};

class OakTree {
public:
    auto& operator=(const OakTree& other) {
        // 일단 local copy 생성 -> OakTree는 유효한 상태
        auto leafs = other.leafs_;
        auto branches = other.branches_;

        // 아무런 예외 오류없이 swap에 의해 객체 상태를 안전하게 수정
        std::swap(leafs_, leafs);
        std::swap(branches_, branches);
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