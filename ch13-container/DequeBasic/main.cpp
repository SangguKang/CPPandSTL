#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> number;
    number.push_back(5);
    number.push_back(6);
    number.push_front(2);
    number.push_front(1);

    for(int i=0; i<number.size(); i++)
    {
        cout << number[i];
    }
    cout << endl;

    return 0;
}
