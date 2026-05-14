#include <iostream>
#include <iomanip>

using namespace std;

struct Rectangle {
    double width;
    double height;
};

int main() {
    Rectangle rect;
    
    cout << "Enter width: ";
    cin >> rect.width;
    
    cout << "Enter height: ";
    cin >> rect.height;
    
    double area = rect.width * rect.height;
    double perimeter = 2 * (rect.width + rect.height);
    
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    
    return 0;
}
