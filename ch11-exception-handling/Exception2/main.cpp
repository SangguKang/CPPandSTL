#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "나누어질 수를 입력: ";
    cin >> a;
    if(a < 0)
    {
        cout << a << "는 음수";
    }
    else
    {
        cout << "나누는 수를 입력: ";
        cin >> b;
        if(b == 0)
            cout << "나누는 수가 0으로 입려됨" << endl;
        else if(b < 0)
            cout << "나누는 수에 " << b << " 입력됨" << endl;
        else
            cout << "나누기 결과: " << a/b << endl;
    }

    return 0;
}
