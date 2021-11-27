#include <iostream>

class Button {
public:
    Button() {}
    auto set_title(const std::string& s) {
        std::cout << "Copy!" << std::endl;
        title_ = s;
    }
    auto set_title(std::string&& s) {
        std::cout << "Move!" << std::endl;
        title_ = std::move(s);
    }
    std::string title_;
};

auto get_ok() {
    return std::string{"OK"};
}

int main() {
    auto button = Button{};

    // Case 1.
    auto str = std::string{"OK"};
    button.set_title(str);

    // Case 2.
    auto str2 = std::string{"OK"};
    button.set_title(std::move(str2));

    // Case 3.
    button.set_title(get_ok());

    // Case 4.
    auto str3 = get_ok();
    button.set_title(str);

    // Case 5.
    const auto str4 = get_ok();
    button.set_title(std::move(str));
}
