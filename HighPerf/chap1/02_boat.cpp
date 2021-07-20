#include <memory>
#include <iostream>

class Engine {
    public:
        auto set_oil_amount(float v) { oil_ = v; }
        auto get_oil_amount() { return oil_; }
    private:
        float oil_{};
};

class YamahaEngine: public Engine {};

class Boat {
    // 복사 불가
    private:
        Boat(const Boat& b) = delete;
        auto operator=(const Boat& b) -> Boat& = delete;
    
    public:
        Boat(std::shared_ptr<Engine> e, float l) : engine_{e}, length_{l} {}
        auto set_length(float l) { length_ = l; }
        auto& get_engine() { return engine_; }

    private:
        float length_{};
        std::shared_ptr<Engine> engine_;
};

int main() {
    auto boat0 = Boat{std::make_shared<YamahaEngine>(), 6.7f};
    // auto boat1 = boat0; // Error!
}