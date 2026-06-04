#include <iostream>

using namespace std;

int main() {
    const int MAX_SPOTS = 20;
    int currentCars = 0;
    int totalEntered = 0;
    int totalExited = 0;
    int choice;

    cout << "=== Система автомобільного паркінгу ===\n";

    while (true) {
        cout << "\n=================================\n";
        cout << "Заповненість: " << currentCars << " / " << MAX_SPOTS << " місць\n";
        cout << "Вільних місць: " << (MAX_SPOTS - currentCars) << "\n";
        cout << "---------------------------------\n";
        cout << "Всього заїхало: " << totalEntered << "\n";
        cout << "Всього виїхало: " << totalExited << "\n";
        cout << "Залишилось на паркінгу: " << currentCars << "\n";
        cout << "=================================\n";
        
        cout << "1. Заїзд автомобіля\n";
        cout << "2. Виїзд автомобіля\n";
        cout << "3. Вийти\n";
        cout << "Виберіть дію: ";
        cin >> choice;

        if (choice == 3) {
            cout << "\nРоботу системи завершено. До побачення!\n";
            break;
        }

        switch (choice) {
            case 1:
                if (currentCars < MAX_SPOTS) {
                    currentCars++;
                    totalEntered++;
                    cout << "✓ Автомобіль успішно заїхав.\n";
                } else {
                    cout << "✗ Паркінг повністю заповнений!\n";
                }
                break;

            case 2:
                if (currentCars > 0) {
                    currentCars--;
                    totalExited++;
                    cout << "✓ Автомобіль успішно виїхав.\n";
                } else {
                    cout << "✗ На паркінгу немає автомобілів!\n";
                }
                break;

            default:
                cout << "Невірний вибір! Спробуйте ще раз.\n";
        }
    }

    // Підсумок при завершенні
    cout << "\n=== Підсумок роботи паркінгу ===\n";
    cout << "Всього заїхало: " << totalEntered << "\n";
    cout << "Всього виїхало: " << totalExited << "\n";
    cout << "Залишилось на паркінгу: " << currentCars << "\n";

    return 0;
}
