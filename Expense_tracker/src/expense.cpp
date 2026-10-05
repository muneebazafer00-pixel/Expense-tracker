#include "expense.hpp"
#include <iostream>
using namespace std;

Expense::Expense(string c, double a, string d) {
    category = c;
    amount = a;
    date = d;
}

string Expense::getCategory() { return category; }
double Expense::getAmount() { return amount; }
string Expense::getDate() { return date; }

void Expense::displayExpense() {
    cout << "Category: " << category 
         << " | Amount: " << amount 
         << " | Date: " << date << endl;
}
