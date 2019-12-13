#include <iostream>

using namespace std;

class Point
{
private:
    int m_x;
    int m_y;
public:
    Point(int x, int y);
    Point operator++();
    Point operator++(int);
    Point operator--();
    Point operator--(int);
    void ShowPoint();
};

Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

Point Point::operator++()
{
    return Point(++m_x, ++m_y);
}
Point Point::operator++(int)
{
    return Point(m_x++, m_y++);
}
Point Point::operator--()
{
    return Point(--m_x, --m_y);
}
Point Point::operator--(int)
{
    return Point(m_x--, m_y--);
}

void Point::ShowPoint()
{
    cout << m_x << " " << m_y << endl;
}

int main()
{
    Point p1(10,10);
    Point p2(20,20);
    Point p3(30,30);
    Point p4(40,40);

    Point a = ++p1;
    Point b = p2++;
    Point c = --p3;
    Point d = p4--;

    a.ShowPoint();
    b.ShowPoint();
    c.ShowPoint();
    d.ShowPoint();

    return 0;
}
