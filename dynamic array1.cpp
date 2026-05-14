#include <cstddef>

class Vector {
private:
    int* data;
    size_t size;
    size_t capacity;

public:
    void pop_back();
};

void Vector::pop_back()
{
    if (size > 0) {
        --size;
    }
}
