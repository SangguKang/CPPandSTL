#include <iostream>

using namespace std;

int main()
{
    char parray[] = "programming";
    char* pnum = parray;

    while(*pnum)
    {
        cout << *pnum;
        pnum++;
    }
    cout << endl;

    return 0;
}
