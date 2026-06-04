#include <iostream>
#include <vector>

using namespace std;

int countEvenNumbers(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int result = countEvenNumbers(numbers);
    cout << result << endl;
    
    return 0;
}
