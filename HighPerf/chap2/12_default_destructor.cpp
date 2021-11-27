#include <algorithm>

struct Point {
    int x_, y_;
    ~Point() = default;
};

auto copy(Point* src, Point* dst) {
    std::copy(src, src+64, dst);
}
