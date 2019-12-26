#include <iostream>

using namespace std;

template <class T> T Max(T a, T b);

int main()
{
    cout << Max('A', 'B') << endl;
    cout << Max(10, 20) << endl;

    return 0;
}

template <class T> T Max(T a, T b)
{
    return a > b ? a : b;
}


