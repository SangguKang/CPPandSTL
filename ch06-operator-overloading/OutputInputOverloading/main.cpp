#include <iostream>

using namespace std;

class Point
{
private:
    int m_x;
    int m_y;
public:
    Point(){}
    Point(int x, int y) : m_x(x), m_y(y){}
    friend ostream& operator<<(ostream& os, const Point& p);
    friend istream& operator>>(istream& is, Point& p);//<<????
};

ostream& operator<<(ostream& os, const Point& p)
{
    os << "(" << p.m_x << "," << p.m_y << ")";
    return os;
}

istream& operator>>(istream& is, Point& p)
{
    is >> p.m_x >> p.m_y;
    return is;
}

int main()
{
    Point p1;
    cin >> p1;
    cout << "p1 = " << p1 << endl;
    cout << "test";

    return 0;
}
