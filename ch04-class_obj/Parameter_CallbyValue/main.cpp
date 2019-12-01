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

/* specific extern function */
//void SetRect(MousePoint pt1, MousePoint pt2)
//{
//    cout << pt1.GetX() << ", " << pt1.GetY() << endl;
//    cout << pt2.GetX() << ", " << pt2.GetY() << endl;
//    pt1.SetXY(1000, 2000);
//    cout << pt1.GetX() << ", " << pt1.GetY() << endl;
//    cout << pt2.GetX() << ", " << pt2.GetY() << endl;
//}

//void CopyObject(MousePoint pt1, MousePoint pt2)
void CopyObject(MousePoint &pt1, MousePoint &pt2)
{
    pt1 = pt2;
    cout << pt1.GetX() << "." << pt1.GetY() << endl;
}

int main()
{
    MousePoint mp1(10, 20), mp2(100, 200);
    cout << mp1.GetX() << ", " << mp1.GetY() << endl;
    CopyObject(mp1, mp2);
    cout << mp1.GetX() << ", " << mp1.GetY() << endl;

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







