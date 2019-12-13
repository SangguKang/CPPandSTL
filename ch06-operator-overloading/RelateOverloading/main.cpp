#include <iostream>

using namespace std;

class Point
{
private:
    int m_x;
    int m_y;
public:
    Point(int x, int y) : m_x(x), m_y(y){cout << "constructor" << endl;}
    bool operator==(const Point& p);
    bool operator>(const Point& p);
    bool operator<(const Point& p);
};

bool Point::operator==(const Point& p)
{
    cout << "operator == " << endl;
    if(m_x == p.m_x && m_y == p.m_y)
        return true;
    else
        return false;
}
bool Point::operator>(const Point& p)
{
    cout << "operator > " << endl;
    if(m_x > p.m_x)
        return true;
    else if(m_y > p.m_y)
        return true;
    return false;
}
bool Point::operator<(const Point& p)
{
    cout << "operator < " << endl;
    if(m_x < p.m_x)
        return true;
    else if(m_y < p.m_y)
        return true;
    return false;
}

int main()
{
    Point p1(10, 10);
    Point p2(20, 20);

    if(p1 > p2)
        cout << "p1 is bigger than p2" << endl;
    else if(p1 < p2)
        cout << "p1 is smaller than p2" << endl;
    else if(p1 == p2)
        cout << "p1 is equal p2" << endl;

    return 0;
}
