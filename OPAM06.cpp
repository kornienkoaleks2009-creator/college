#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sortByLength(const vector<string>& arr) {
    vector<string> sorted = arr;
    sort(sorted.begin(), sorted.end(), 
         [](const string& a, const string& b) {
             return a.length() < b.length();
         });
    return sorted;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        getline(cin, strings[i]);
    }
    
    vector<string> result = sortByLength(strings);
    
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}
