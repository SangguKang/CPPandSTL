#include <iostream>

using namespace std;

template <class T> void Swap(T& x, T& y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    char ca = 'A', cb = 'B';
    int na = 10, nb = 20;

    cout << "ca = " << ca << ", " << "cb = " << cb << endl;
    Swap(ca, cb);
    cout << "ca = " << ca << ", " << "cb = " << cb << endl;

    cout << "na = " << na << ", " << "nb = " << nb << endl;
    Swap(na, nb);
    cout << "na = " << na << ", " << "nb = " << nb << endl;

    return 0;
}
