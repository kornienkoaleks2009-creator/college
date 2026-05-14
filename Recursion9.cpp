#include <iostream>
#include <vector>

bool is_palindrome(std::vector<char>& v, int left, int right)
{
    // Базовий випадок: коли вказівники зустрілися або перетнулися
    if (left >= right) {
        return true;
    }
    
    // Якщо символи не співпадають — не паліндром
    if (v[left] != v[right]) {
        return false;
    }
    
    // Рекурсивний виклик для внутрішньої частини
    return is_palindrome(v, left + 1, right - 1);
}

int main()
{
    std::vector<char> v1 = {'a', 'b', 'b', 'a'};
    std::vector<char> v2 = {'a', 'b', 'c'};
    std::vector<char> v3 = {'r', 'a', 'd', 'a', 'r'};
    
    std::cout << std::boolalpha;
    std::cout << is_palindrome(v1, 0, v1.size()-1) << std::endl; // true
    std::cout << is_palindrome(v2, 0, v2.size()-1) << std::endl; // false
    std::cout << is_palindrome(v3, 0, v3.size()-1) << std::endl; // true

    return 0;
}
