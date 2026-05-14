#include <cstddef>

class Vector {
private:
    int* data;
    size_t size;
    size_t capacity;

public:
    bool is_empty() const;
};

bool Vector::is_empty() const
{
    return size == 0;
}
