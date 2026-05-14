#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    Date birthDate;
};

int main() {
    Student student;
    
    cout << "Enter name: ";
    getline(cin, student.name);
    
    cout << "Enter day: ";
    cin >> student.birthDate.day;
    
    cout << "Enter month: ";
    cin >> student.birthDate.month;
    
    cout << "Enter year: ";
    cin >> student.birthDate.year;
    
    cout << "\n" << student.name << " was born on ";
    
    // Форматування дати з двома цифрами
    cout << setfill('0') << setw(2) << student.birthDate.day << "."
         << setw(2) << student.birthDate.month << "."
         << student.birthDate.year << endl;
    
    return 0;
}
