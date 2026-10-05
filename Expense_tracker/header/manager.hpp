#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "expense.hpp"
#include <vector>

class ExpenseManager {
private:
    std::vector<Expense> expenses;

public:
    void addExpense(string category, double amount, string date);
    void viewExpenses();
    void calculateTotal();
    void saveToFile(Expense exp);
    void loadFromFile(); // optional: load previous expenses
};

#endif
