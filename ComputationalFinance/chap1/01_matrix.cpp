#include <vector>

using namespace std;

template <class T>
class matrix {
    // Dimensions
    size_t myRows;
    size_t myCols;

    // Data
    vector<T> myVector;

public:
    using value_type = T;

    // Constructors
    matrix() : myRows(0), myCols(0) {}
    matrix(const size_t rows, const size_t cols)
        : myRows(rows), myCols(cols), myVector(rows*cols) {}

    // Access
    size_t rows() const { return myRows; }
    size_t cols() const { return myCols; }
    // So we can call matrix [i][j]
    T* operator[] (const size_t row) {
        return &myVector[row * myCols];
    }
    const T* operator[] (const size_t row) const {
        return &myVector[row * myCols];
    }
};

inline void matrixProductNaive(
    const matrix<double>& a,
    const matrix<double>& b,
    matrix<double>& c) { 
    const size_t rows = a.rows(), cols = b.cols(), n = a.cols();
    
    // Outermost loop on result rows
    for (size_t i = 0; i < rows; ++i) {
        const auto ai = a[i];
        auto ci = c[i];

        for (size_t j = 0; j < cols; ++j) {
            // Innermost loop for dot product
            double res = 0.0;
            for (size_t k = 0; k < n; ++k) {
                res += ai[k] * b[k][j];
            }
            // Set result
            c[i][j] = res;
        }
    }
}
