#include "manager.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void ExpenseManager::addExpense(string category, double amount, string date) {
    Expense newExpense(category, amount, date);
    expenses.push_back(newExpense);
    saveToFile(newExpense);
}

void ExpenseManager::viewExpenses() {
    for (auto &exp : expenses) {
        exp.displayExpense();
    }
}

void ExpenseManager::calculateTotal() {
    double total = 0;
    for (auto &exp : expenses) {
        total += exp.getAmount();
    }
    cout << "Total Expenses: " << total << endl;
}

void ExpenseManager::saveToFile(Expense exp) {
    ofstream file("data/expenses.txt", ios::app);
    file << exp.getCategory() << "," 
         << exp.getAmount() << "," 
         << exp.getDate() << endl;
    file.close();
}

void ExpenseManager::loadFromFile() {
    ifstream file("data/expenses.txt");
    string category, date;
    double amount;
    while (file >> category >> amount >> date) {
        Expense exp(category, amount, date);
        expenses.push_back(exp);
    }
    file.close();
}
