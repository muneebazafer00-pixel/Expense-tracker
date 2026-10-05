#include <iostream>
#include "manager.hpp"
using namespace std;

int main() {
    ExpenseManager manager;
    manager.loadFromFile(); // load previous data if any

    int choice;
    do {
        cout << "\n--- Expense Tracker ---\n";
        cout << "1. Add Expense.\n";
        cout << "2. View Expenses.\n";
        cout << "3. Calculate Total.\n";
        cout << "4. Exit!\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string category, date;
            double amount;
            cout << "Enter category: ";
            cin >> category;
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter date in digits (Date/Month/Year): ";
            cin >> date;
            manager.addExpense(category, amount, date);
        } else if (choice == 2) {
            manager.viewExpenses();
        } else if (choice == 3) {
            manager.calculateTotal();
        }
    } while (choice != 4);

    return 0;
}

//command: g++ -std=c++11 test/main.cpp src/*.cpp -I header -o oop