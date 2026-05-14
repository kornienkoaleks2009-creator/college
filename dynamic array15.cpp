#include <iostream>

struct char_vector {
    char* data;
    int size;
    int capacity;

    void print_string() const;
};

void char_vector::print_string() const
{
    std::cout.write(data, size);
}
