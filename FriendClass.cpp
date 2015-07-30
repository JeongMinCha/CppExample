#include <iostream>
using namespace std;

class MyDeposit {
    friend class FriendDeposit;
public:
    MyDeposit() {
        strName = "이창현";
        dBalance = 1000;
    }
    ~MyDeposit() {
    }
private:
    char* strName;
    double dBalance;
};

class FriendDeposit {
public:
    FriendDeposit (MyDeposit md) {
        cout << "name: " << md.strName << endl;
        cout << "balance: " << md.dBalance << endl;
    }
    ~FriendDeposit() {
    }
private:
    char *strName;
    double dBalance;
};

int main(int argc, char** argv) {
    
    MyDeposit md;
    FriendDeposit fd(md);
    return 0;
}
