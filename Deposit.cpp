#include <iostream>

class Deposit {
public:
    Deposit() {
    }
    Deposit(char* name, double balance) {
        strName = name;
        dBalance = balance;
    }
    void BankBalance() {
        dBalance = dBalance + (dBalance * dInterestRate);
    }
private:
    char *strName;
    double dBalance;
    static double dInterestRate;
};
