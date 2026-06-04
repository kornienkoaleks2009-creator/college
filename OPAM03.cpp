#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printReverse(const string& input) {
    string stored = input;
    
    reverse(stored.begin(), stored.end());
    
    cout << stored << endl;
}

int main() {
    string text;
    
    getline(cin, text);
    
    printReverse(text);
    
    return 0;
}
