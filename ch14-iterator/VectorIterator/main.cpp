#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    int i;
    cout << "�迭�� ũ�⸦ �Է��Ͻÿ�.";
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
