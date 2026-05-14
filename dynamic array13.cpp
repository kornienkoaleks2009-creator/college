#include <cstddef>

class Vector {
private:
    int* data;
    size_t size;
    size_t capacity;

public:
    void unique();
};

void Vector::unique()
{
    if (size <= 1) {
        return;
    }

    size_t new_size = 1;
    for (size_t i = 1; i < size; ++i) {
        if (data[i] != data[new_size - 1]) {
            data[new_size] = data[i];
            ++new_size;
        }
    }

    size = new_size;
}
