#include <iostream>

double fast_power(double x, int n)
{
    if (n == 0) {
        return 1.0;
    }
    
    if (n % 2 == 0) {
        // n парне
        double half = fast_power(x, n / 2);
        return half * half;
    } 
    else {
        // n непарне
        return x * fast_power(x, n - 1);
    }
}

int main()
{
    std::cout << fast_power(2, 10) << std::endl; // 1024
    std::cout << fast_power(3, 5) << std::endl; // 243
    std::cout << fast_power(5, 0) << std::endl; // 1
    std::cout << fast_power(2.5, 3) << std::endl; // 15.625

    return 0;
}
