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
    int x, y;
};

MousePoint::MousePoint()
{
    //
}
MousePoint::MousePoint(int nX, int nY)
{
    x = nX;
    y = nY;
}

void MousePoint::SetXY(int nX, int nY)
{
    x = nX;
    y = nY;
}
int MousePoint::GetX() const
{
    return x;
}
int MousePoint::GetY() const
{
    return y;
}

int main()
{
    #if 0   //using not dynamic memory allocation
    MousePoint mp(10, 20);
    MousePoint mpp;
    cout << "x cord: " << mp.GetX() << ", " << "y cord: " << mp.GetY() << endl;
    cout << "x cord: " << mpp.GetX() << ", " << "y cord: " << mpp.GetY() << endl;
    #else   //using dynamic memory allocation
//    MousePoint *pt;
//    pt = new MousePoint(10, 20);
//    cout << "x cord: " << pt->GetX() << ", " << "y cord: " << pt->GetY() << endl;
//    delete pt;

    MousePoint *pArr[3];
    pArr[0] = new MousePoint(10,20);
    pArr[1] = new MousePoint(100, 200);
    pArr[2] = new MousePoint(1000, 2000);

    for(int i=0; i<3; i++)
        cout << pArr[i]->GetX() << "," << pArr[i]->GetY() << endl;

    for(int i=0; i<3; i++)
        delete pArr[i];
    #endif

    return 0;
}
