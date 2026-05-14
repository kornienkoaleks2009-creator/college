#include <iostream>

void print_binary(int n)
{
    if (n == 0) {
        std::cout << 0;
        return;
    }

    print_binary(n / 2);
    std::cout << (n % 2);
}
