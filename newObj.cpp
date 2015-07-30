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
    MousePoint *pt;
    pt = new MousePoint(10, 20);
    cout << "x position: " << pt->GetX() << ", " <<  "y position: " << pt->GetY() << endl;
    delete pt;
    return 0;
}
