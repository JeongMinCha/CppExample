#include <iostream>
using namespace std;

class String {
public:
    String (char ch, int nSize);
    ~String ();
    //void operator=(const String& s);
    String& operator=(const String& s);
    void SetData ();
private:
    int nLength;
    char *pBuffer;
};

String::String (char ch, int nSize) {
    nLength = nSize;
    pBuffer = new char[nLength + 1];
    memset (pBuffer, ch, nLength);
    pBuffer[nLength] = '\0';
    //cout << "pBuffer: " << pBuffer << endl;
    //cout << "nLength: " << nLength << endl;
}

String& String::operator=(const String& s) {
    if (&s == this) {
        return *this;
    }

    delete pBuffer;
    nLength = s.nLength;
    pBuffer = new char[nLength + 1];
    strcpy (pBuffer, s.pBuffer);

    return *this;
}

void String::SetData() {
    cout << "pBuffer: " << pBuffer << endl;
    cout << "nLength: " << nLength << endl;
}

String::~String () {
    delete pBuffer;
}

int main() {
    String str1('A', 5), str2('B', 5), str3('C', 4);
    str1.SetData();
    str1 = str2 = str3;
    str1.SetData();
    str2.SetData();
    return 0;
}
