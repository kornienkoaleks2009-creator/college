#include <cstddef>

class Vector {
private:
    int* data;
    size_t size;
    size_t capacity;

public:
    int count(int value) const;
};

int Vector::count(int value) const
{
    int cnt = 0;
    for (size_t i = 0; i < size; ++i) {
        if (data[i] == value) {
            ++cnt;
        }
    }
    return cnt;
}
