#include <iostream>

int digit_count(int n)
{
    if (n == 0) {
        return 0;
    }
    if (n < 10) {
        return 1;
    }
    return 1 + digit_count(n / 10);
}

int main()
{
    std::cout << digit_count(1234) << std::endl; // 4
    std::cout << digit_count(7) << std::endl; // 1
    std::cout << digit_count(99999) << std::endl; // 5
    std::cout << digit_count(0) << std::endl; // 0 або 1 (залежно від вимог)

    return 0;
}
