#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "나누어질 수를 입력: ";
    cin >> a;
    cout << "나누는 수를 입력: ";
    cin >> b;

    try
    {
        if(b == 0) throw b;
        cout << "나누기 결과: " << a/b << endl;
    }
    catch(int exception)
    {
        cout << "나누어야 할 수가 " << exception << "이므로 연산을 수행할 수 없습니다." << endl;
    }

    return 0;
}
