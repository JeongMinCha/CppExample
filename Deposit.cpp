#include <iostream>
using namespace std;

class Deposit {
public:
    Deposit() {
        nCount ++;
        cout << "# of objects: " << nCount << endl;
    }
    ~Deposit() {
        nCount --;
        cout << "# of objects: " << nCount << endl;
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
    static int nCount;
};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

int main(int argc, char **argv) {
    Deposit kim, lee;
    return 0;
}
