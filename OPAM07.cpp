#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filterLongStrings(const vector<string>& arr) {
    vector<string> result;
    for (const string& s : arr) {
        if (s.length() > 3) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Для коректного зчитування рядків
    
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        getline(cin, strings[i]);
    }
    
    vector<string> result = filterLongStrings(strings);
    
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}
