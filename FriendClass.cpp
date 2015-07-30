#include <iostream>
using namespace std;

class MyDeposit {
public:
    // 전역 함수 프렌드 선언 
    friend void withdraw (MyDeposit md);
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

void withdraw (MyDeposit md) {
    cout << "Friend function withdraw(): " << md.strName << endl;
    cout << "Friend function withdraw(): " << md.dBalance << endl;
}

int main(int argc, char** argv) {
    
    MyDeposit md;
    withdraw (md);
    return 0;
}
