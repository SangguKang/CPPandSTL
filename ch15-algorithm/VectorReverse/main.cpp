#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    vector<int> vec1(&arr[0], &arr[7]);
    vector<int>::iterator it;

    cout << "before reverse: ";
    for(it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    reverse(vec1.begin(), vec1.end());

    cout << "after reverse: ";
    for(it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
