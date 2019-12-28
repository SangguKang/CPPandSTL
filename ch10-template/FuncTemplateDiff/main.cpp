#include <iostream>

using namespace std;

template <typename T1, typename T2>
void print(T1 a, T2 b)
{
    cout << a << ", " << b << endl;
}

int main()
{
    print('A', 'B');
    print(10, 'B');
    print(10, 20);

    return 0;
}
