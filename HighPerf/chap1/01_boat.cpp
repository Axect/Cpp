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
    public:
        Boat(std::shared_ptr<Engine> e, float l) : engine_{e}, length_{l} {}
        auto set_length(float l) { length_ = l; }
        auto get_engine() { return engine_; }
    private:
        std::shared_ptr<Engine> engine_;
        float length_{};
};

int main() {
    auto boat0 = Boat(std::make_shared<YamahaEngine>(), 6.7f);
    auto boat1 = boat0;

    boat1.set_length(8.56f);
    boat1.get_engine()->set_oil_amount(3.4f); // boat0도 바뀜!

    std::cout << boat0.get_engine()->get_oil_amount() << std::endl;
}