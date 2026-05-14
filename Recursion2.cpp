#include <iostream>

int digit_sum(int n)
{
    if (n == 0)
        return 0;
    
    return (n % 10) + digit_sum(n / 10);
}

int main()
{
    std::cout << digit_sum(1234) << std::endl; // 10
    std::cout << digit_sum(567) << std::endl; // 18
    std::cout << digit_sum(0) << std::endl; // 0
    
    return 0;
}
