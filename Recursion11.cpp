#include <iostream>

int gcd(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    std::cout << gcd(48, 18) << std::endl; // 6
    std::cout << gcd(56, 98) << std::endl; // 14
    std::cout << gcd(13, 5) << std::endl; // 1
    std::cout << gcd(17, 0) << std::endl; // 17
    std::cout << gcd(0, 0) << std::endl; // 0 (зазвичай приймається)

    return 0;
}
