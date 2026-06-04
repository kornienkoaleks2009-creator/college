#include <iostream>
#include <string>

using namespace std;
-
int countColonElements(const string& str) {
    if (str.empty()) {
        return 0;
    }
    
    int count = 1;
    for (char ch : str) {
        if (ch == ':') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    
    int result = countColonElements(input);
    cout << result << endl;
    
    return 0;
}
