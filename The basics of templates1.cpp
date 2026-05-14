#include <iostream>

template<typename T>
T my_min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    std::cout << my_min(5, 3) << '\n'; // 3
    std::cout << my_min(2.5, 8.1) << '\n'; // 2.5
    std::cout << my_min('a', 'z') << '\n'; // a

    return 0;
}
