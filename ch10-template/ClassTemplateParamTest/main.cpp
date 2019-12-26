#include <iostream>
#include "CParam.h"
using namespace std;

int main()
{
    int i;
    CParam<int, 10> pi;
    for(i=0; i<10; i++)
        pi.set(i, i);
    for(i=0; i<10; i++)
        cout << pi.get(i) << " ";
    cout << endl;

    return 0;
}
