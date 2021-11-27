#include <iostream>
#include <initializer_list>
#include <string>
#include <vector>

class Menu {
public:
    Menu(const std::initializer_list<std::string>& items)
        : items_{items} {}
    auto select(int i) {
        index_ = i;
    }
    auto selected_item() const {
        return index_ != -1 ? items_[index_] : "";
    }
    auto get_index() const {
        return index_;
    }
    auto get_length() const {
        return items_.size();
    }

private:
    int index_{-1};
    std::vector<std::string> items_;
};

int main() {
    auto a = Menu{"New", "Open", "Close", "Save"};
    a.select(2);
    auto b = std::move(a);
    std::cout << "index of b: " << b.get_index() << std::endl;
    std::cout << "index of a: " << a.get_index() << std::endl;
    std::cout << "length of a.items: " << a.get_length() << std::endl;
    auto selected = a.selected_item(); // Crash!
    std::cout << selected << std::endl;
}
