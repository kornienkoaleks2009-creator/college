#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

int main() {
    Book book;
    
    cout << "Enter title: ";
    getline(cin, book.title);
    
    cout << "Enter author: ";
    getline(cin, book.author);
    
    cout << "Enter year: ";
    cin >> book.year;
    
    cout << "\"" << book.title << "\" by " << book.author 
         << " (" << book.year << ")" << endl;
    
    return 0;
}
