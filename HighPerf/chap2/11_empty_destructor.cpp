#include <algorithm>

struct Point {
    int x_, y_;
    ~Point() {}
};

auto copy(Point* src, Point* dst) {
    std::copy(src, src+64, dst);
}
