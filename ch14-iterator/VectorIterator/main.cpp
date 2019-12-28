#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    int i;
    cout << "배열의 크기를 입력하시오.";
    cin >> num;

    vector<int> array(num);
    vector<int>::iterator it;

    for(i = 0; i < num; i++)
    {
        array[i] = i;
    }

    for(it = array.begin(); it != array.end(); it++)//need to add i for array index
    {
        cout << "array[" << *it << "]" << " = " << *it << endl;
    }

    return 0;
}
