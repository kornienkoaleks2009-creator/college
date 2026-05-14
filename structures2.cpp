#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product product;
    
    cout << "Enter name: ";
    getline(cin, product.name);
    
    cout << "Enter price: ";
    cin >> product.price;
    
    cout << "Enter quantity: ";
    cin >> product.quantity;
    
    double total = product.price * product.quantity;
    
    cout << fixed << setprecision(2);
    cout << "Total: " << total << " UAH" << endl;
    
    return 0;
}
