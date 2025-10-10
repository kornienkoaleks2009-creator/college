#include <iostream>

int main() {
    int number;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> number;
 
    if(number > 0){
        std::cout << "Your number " << number << " is positive." << std::endl;
    }
    else if(number < 0){
        std::cout << "Your number " << number << " is negative." << std::endl;
    }
    else {
        std::cout << "It's zero." << std::endl;
    }
 
    return 0;
}
