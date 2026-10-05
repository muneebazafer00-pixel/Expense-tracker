#ifndef EXPENSE_HPP
#define EXPENSE_HPP

#include <string>
using namespace std;

class Expense {
private:
    string category;
    double amount;
    string date;

public:
    Expense(string c, double a, string d);
    string getCategory();
    double getAmount();
    string getDate();
    void displayExpense();
};

#endif  
