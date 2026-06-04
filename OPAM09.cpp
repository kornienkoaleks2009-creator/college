#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance = 5000.0;
    const double MAX_WITHDRAW_LIMIT = 2000.0;
    int choice;
    double amount;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "\n=== Банкомат ===\n";
        cout << "1. Перевірити баланс\n";
        cout << "2. Поповнити рахунок\n";
        cout << "3. Зняти кошти\n";
        cout << "4. Вийти\n";
        cout << "Виберіть операцію: ";
        cin >> choice;

        if (choice == 4) {
            cout << "Дякуємо за користування банкоматом!\n";
            break;
        }

        switch (choice) {
            case 1:
                cout << "Ваш баланс: " << balance << " грн\n";
                break;

            case 2:
                cout << "Введіть суму для поповнення: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Рахунок успішно поповнено на " << amount << " грн\n";
                } else {
                    cout << "Помилка: сума повинна бути більше 0!\n";
                }
                break;

            case 3:
                cout << "Введіть суму для зняття: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Помилка: сума повинна бути більше 0!\n";
                }
                else if (amount > balance) {
                    cout << "Помилка: недостатньо коштів на рахунку!\n";
                }
                else if (amount > MAX_WITHDRAW_LIMIT) {
                    cout << "Помилка: перевищено ліміт зняття (" << MAX_WITHDRAW_LIMIT << " грн)!\n";
                }
                else {
                    balance -= amount;
                    cout << "Операція успішна. Видано: " << amount << " грн\n";
                    cout << "Залишок на рахунку: " << balance << " грн\n";
                }
                break;

            default:
                cout << "Невірний вибір! Спробуйте ще раз.\n";
        }
    }

    return 0;
}
