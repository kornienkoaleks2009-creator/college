#include <iostream>
#include <string>

using namespace std;

int main() {
    const string correctPassword = "password123";
    const int maxAttempts = 3;
    int attempts = 0;
    string input;

    cout << "=== Система введення пароля ===\n\n";

    while (attempts < maxAttempts) {
        cout << "Введіть пароль: ";
        cin >> input;

        if (input == correctPassword) {
            cout << "\nДоступ надано! Вітаємо.\n";
            return 0;
        } else {
            attempts++;
            cout << "Невірний пароль! Залишилося спроб: " << (maxAttempts - attempts) << "\n\n";
        }
    }

    cout << "Помилка! Кількість спроб вичерпано.\n";
    cout << "Доступ заблоковано.\n";

    return 0;
}
