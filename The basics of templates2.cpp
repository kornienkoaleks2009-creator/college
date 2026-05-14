#include <iostream>

void print_info(int x)
{
    std::cout << "Number: " << x << std::endl;
}

void print_info(const char* text)
{
    std::cout << "Text: " << text << std::endl;
}

void print_info(char c)
{
    std::cout << "Character: " << c << std::endl;
}
