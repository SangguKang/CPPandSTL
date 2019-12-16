#include <iostream>

using namespace std;

class Point
{
public:
    int operator()(int x, int y)
    {
        return x + y;
    }
    int operator()(int x, int y, int z)
    {
        return x + y + z;
    }
};

int main()
{
    Point p;
    cout << p(10, 20) << endl;
    cout << p(10, 20, 30) << endl;

    return 0;
}
