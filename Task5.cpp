#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int count = 0;

    for (int i = 0; i <= 999999; i++) {
        int n1 = (i / 100000) % 10;
        int n2 = (i / 10000) % 10;
        int n3 = (i / 1000) % 10;
        int n4 = (i / 100) % 10;
        int n5 = (i / 10) % 10;
        int n6 = i % 10;

        if (n1 + n2 + n3 == n4 + n5 + n6) {
            cout << setw(6) << setfill('0') << i << endl;
            count++;
        }
    }

    cout << "Total number of lucky tickets: " << count << endl;
    return 0;
}
