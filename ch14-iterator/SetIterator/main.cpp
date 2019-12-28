#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1,2,4,2,5,6,3};
    set<int> scon;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        scon.insert(arr[i]);
    }

    set<int>::iterator it;
    for(it = scon.begin(); it != scon.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    return 0;
}
