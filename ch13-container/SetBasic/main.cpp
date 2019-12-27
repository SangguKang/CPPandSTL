#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1,2,3,2,5,6,3};
    set<int> scon;
    set<int>::iterator it;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        scon.insert(arr[i]);
    }

    for(it=scon.begin(); it!=scon.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    const char* strtemp = "fgdkabcafk";
    set<char> schar(&strtemp[0], &strtemp[10]);
    set<char>::iterator itr;

    for(itr = schar.begin(); itr != schar.end(); itr++)
    {
        cout << *itr;
    }
    cout << endl;

    return 0;
}
