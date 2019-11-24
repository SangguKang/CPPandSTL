#include <iostream>

using namespace std;

class MousePoint
{
public:
    MousePoint();
    MousePoint(int nX, int nY);
    void SetXY(int nX, int nY);
    int GetX() const;
    int GetY() const;
private:
    int x,y;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

MousePoint::MousePoint()
{

}
MousePoint::MousePoint(int nX, int nY)
{
    x = nX;
    y = nY;
}
void MousePoint::SetXY(int nX, int nY)
{
    this->x = nX;
    this->y = nY;
}
int MousePoint::GetX() const
{
    return x;
}

int MousePoint::GetY() const
{
    return y;
}







