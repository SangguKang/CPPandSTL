#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};
    vector<int> vec1(&arr[0], &arr[5]);
    if(find(vec1.begin(), vec1.end(), 30) != vec1.end())
        cout << "�˻� ����" << endl;
    else
        cout << "�˻� ����" << endl;

    return 0;
}
