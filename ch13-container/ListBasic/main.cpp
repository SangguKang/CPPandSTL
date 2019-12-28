#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;

    for(int i=0; i<5; i++)
    {
        lst.push_back(i);
    }

    int i;
    list<int>::iterator it;
    for(it = lst.begin(), i = 0; it != lst.end(); it++, i++)
    {
        cout << i << "¹øÂ°=" << *it << endl;
    }

    return 0;
}
