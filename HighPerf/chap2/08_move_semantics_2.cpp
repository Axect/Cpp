#include <initializer_list>
#include <iostream>

class Buffer {
public:
    Buffer(const std::initializer_list<float>& values)
        : size_{values.size()} {
            std::cout << "Construction!" << std::endl;
            ptr_ = new float[values.size()];
            std::copy(values.begin(), values.end(), ptr_);
        }
    auto begin() const { return ptr_; }
    auto end() const { return ptr_ + size_; }

    // Copy Constructor
    Buffer(const Buffer& other) 
        : size_{other.size_} {
            ptr_ = new float[other.size_];
            std::copy(other.ptr_, other.ptr_ + size_, ptr_);
            std::cout << "Copy Construction!" << std::endl;
        }
    
    // Copy Assignment
    auto& operator=(const Buffer& other) {
        delete [] ptr_;
        ptr_ = new float[other.size_];
        size_ = other.size_;
        std::copy(other.ptr_, other.ptr_ + size_, ptr_);
        std::cout << "Copy Assignment!" << std::endl;
        return *this;
    }

    // Move Constructor
    Buffer(Buffer&& other) noexcept
        : size_{other.size_}, ptr_{other.ptr_} {
            std::cout << "Move Construction!" << std::endl;
            other.ptr_ = nullptr;
            other.size_ = 0;
        }

    // Move Assignment
    auto& operator=(Buffer&& other) noexcept {
        std::cout << "Move Assignment!" << std::endl;
        ptr_ = other.ptr_;
        size_= other.size_;
        other.ptr_ = nullptr;
        other.size_ = 0;
        return *this;
    }

    // Destruct
    ~Buffer() {
        delete [] ptr_;
        ptr_ = nullptr;
    }

private:
    size_t size_{0};
    float* ptr_{nullptr};
};

int main() {
    auto b0 = Buffer({0.0f, 0.5f, 1.0f, 1.5f});
    auto b1 = b0;
    b0 = b1;
    const auto& b2 = b1;

    auto b3 = std::move(b1);
    b3 = std::move(b0);

    return 0;
}
