#include <iostream>

using namespace std;

class Point
{
private:
    int m_x;
    int m_y;
public:
    Point(int x, int y) : m_x(x), m_y(y)
    {
        cout << "constructor" << endl;
    }
    Point operator+(const Point& p);
    void ShowPoint();
};

Point Point::operator+(const Point& p)
{
    cout << "operator" << endl;
    return Point(m_x + p.m_x, m_y + p.m_y);
}

int main()
{
    Point p1(10, 10);
    Point p2(20, 20);
    int n1 = 10;
    int n2 = 20;

    Point a = p1 + p2;  //+ is operator overloading. internally p1 + p2 => p1.operator+(p2);
    int b = n1 + n2;    //+ is basic operator.

    cout << "+ operator overloading result: ";
    a.ShowPoint();
    cout << "+ basic operation result: ";
    cout << b << endl;

    return 0;
}

void Point::ShowPoint()
{
    cout << m_x << " " << m_y << endl;
}
