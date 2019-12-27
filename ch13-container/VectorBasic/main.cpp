#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cout << "배열 크기 입력: ";
    cin >> num;

    vector<int> arr(num);

    for(int i=0; i<num; i++)
        arr[i] = i;

    for(int i=0; i<num; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;

    return 0;
}

