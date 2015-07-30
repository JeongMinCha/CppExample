#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int *pBuffer;
    int nLength;
    cout << "# of memories to be allocated in heap area: ";
    cin >> nLength;

    pBuffer = new int[nLength];
    for (int i = 0; i < nLength; i++) {
        pBuffer[i] = i + 1;
    }
    for (int i = 0; i < nLength; i++) {
        cout << pBuffer[i] << " ";
    }
    cout << endl;
    delete[] pBuffer;
    return 0;
}
