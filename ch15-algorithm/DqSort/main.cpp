#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {30,20,50,60,80,10,70};
    deque<int> dq;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        dq.push_back(arr[i]);
    }

    deque<int>::iterator it;

    sort(dq.begin(), dq.end());

    for(it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
