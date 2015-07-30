#include <iostream>
using namespace std;

class MousePoint {
private:
    int x, y;
public:
    MousePoint();
    MousePoint(int nX, int nY);
    inline int GetX() const { return x; }
    inline int GetY() const { return y; }
    void SetXY(int nX, int nY);
}; 

MousePoint::MousePoint(int nX, int nY) {
    this->x = nX;
    this->y = nY;
}

void MousePoint::SetXY (int nX, int nY) {
    this->x = nX;
    this->y = nY;
}

int main(int argc, char ** argv) {
    const MousePoint pt(10, 20);
    return 0;
}
