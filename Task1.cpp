#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter two numbers: ";
    cin >> start >> end;

    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
