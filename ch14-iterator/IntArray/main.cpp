#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int* pnum;

    for(pnum = &arr[0]; pnum != &arr[5]; pnum++)
        cout << *pnum;
    cout << endl;

    return 0;
}
