#include <iostream>
using namespace std;

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
    
    static double GetInterestRate () {
        return dInterestRate;
    }
private:
    char *strName;
    double dBalance;
    static double dInterestRate;
};

double Deposit::dInterestRate = 0.05;

int main(int argc, char **argv) {
    Deposit::SetInterestRate(0.05);
    cout << "Modified Interest Rate: " << Deposit::GetInterestRate() << endl;
    return 0;
}
