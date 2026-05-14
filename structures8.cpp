#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    Product p1, p2;
    
    // Зчитування першого товару
    cout << "Product 1 - name: ";
    getline(cin, p1.name);
    cout << "Product 1 - price: ";
    cin >> p1.price;
    
    // Очищення буфера після cin
    cin.ignore();
    
    // Зчитування другого товару
    cout << "Product 2 - name: ";
    getline(cin, p2.name);
    cout << "Product 2 - price: ";
    cin >> p2.price;
    
    cout << fixed << setprecision(2);
    
    if (p1.price > p2.price) {
        cout << p1.name << " is more expensive" << endl;
    }
    else if (p2.price > p1.price) {
        cout << p2.name << " is more expensive" << endl;
    }
    else {
        cout << "Both products have the same price" << endl;
    }
    
    return 0;
}
