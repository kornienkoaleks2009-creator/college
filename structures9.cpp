#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;
};

int main() {
    Complex c1, c2, sum;
    
    // Зчитування першого комплексного числа
    cout << "Complex 1 - real: ";
    cin >> c1.real;
    cout << "Complex 1 - imag: ";
    cin >> c1.imag;
    
    // Зчитування другого комплексного числа
    cout << "Complex 2 - real: ";
    cin >> c2.real;
    cout << "Complex 2 - imag: ";
    cin >> c2.imag;
    
    // Обчислення суми
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    
    // Вивід результату
    cout << "Sum: " << sum.real;
    
    if (sum.imag >= 0) {
        cout << " + " << sum.imag << "i" << endl;
    } else {
        cout << " - " << -sum.imag << "i" << endl;
    }
    
    return 0;
}
