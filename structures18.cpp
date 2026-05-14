#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string name;
    double price;
};

struct Order {
    Product product;
    int quantity;
};

int main() {
    Order order;
    
    cout << "Product name: ";
    getline(cin, order.product.name);
    
    cout << "Product price: ";
    cin >> order.product.price;
    
    cout << "Order quantity: ";
    cin >> order.quantity;
    
    double total = order.product.price * order.quantity;
    
    cout << fixed << setprecision(2);
    cout << "\nOrder total: " << total << " UAH" << endl;
    
    return 0;
}
