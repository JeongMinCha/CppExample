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

    static void SetInterestRate (double dNewRate) {
        dInterestRate = dNewRate;
    }
private:
    char *strName;
    double dBalance;
    static double dInterestRate;
};

double Deposit::dInterestRate = 0.05;

int main(int argc, char **argv) {
    Deposit kim, lee;
    Deposit::SetInterestRate(0.05);
    return 0;
}
