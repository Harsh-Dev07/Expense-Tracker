#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount, balance = 0;

    while (true) {
        cout << "\n1. Add Income\n2. Add Expense\n3. Show Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter income amount: ";
            cin >> amount;
            balance += amount;
        }
        else if (choice == 2) {
            cout << "Enter expense amount: ";
            cin >> amount;
            balance -= amount;
        }
        else if (choice == 3) {
            cout << "Current Balance: " << balance << endl;
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}