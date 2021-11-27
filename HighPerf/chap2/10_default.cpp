#include <iostream>

class Button {
public:
    Button() {}

    Button(const Button&) = default;
    auto operator=(const Button&) -> Button& = default;
    Button(Button&&) noexcept = default;
    auto operator=(Button&&) noexcept -> Button& = default;

    ~Button() = default;
};

int main() {
    auto b0 = Button();
    auto b1 = b0;
    auto b2 = std::move(b0);

    return 0;
}
