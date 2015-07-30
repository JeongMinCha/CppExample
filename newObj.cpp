#include <iostream>
using namespace std;

class MousePoint {
public:
    MousePoint();
    MousePoint(int nX, int nY);
    void SetXY(int nX, int nY);
    int GetX() const;
    int GetY() const;
private:
    int x, y;
};

MousePoint::MousePoint() {
}
MousePoint::MousePoint(int nX, int nY) {
    this->x = nX;
    this->y = nY;
}
void MousePoint::SetXY(int nX, int nY) {
    this->x = nX;
    this->y = nY;
}
int MousePoint::GetX() const {
    return x;
}
int MousePoint::GetY() const {
    return y;
}

int main(int argc, char** argv) {
    MousePoint *pArr[3];
    pArr[0] = new MousePoint(10, 20);
    pArr[1] = new MousePoint(100, 200);
    pArr[2] = new MousePoint(1000, 2000);

    for (int i = 0; i < 3; i++) {
        cout << pArr[i]->GetX() << ", " << pArr[i]->GetY() << endl;
        delete pArr[i];
    }

    return 0;
}
