#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "�������� ���� �Է�: ";
    cin >> a;
    cout << "������ ���� �Է�: ";
    cin >> b;

    try
    {
        if(b == 0) throw b;
        cout << "������ ���: " << a/b << endl;
    }
    catch(int exception)
    {
        cout << "������� �� ���� " << exception << "�̹Ƿ� ������ ������ �� �����ϴ�." << endl;
    }

    return 0;
}
