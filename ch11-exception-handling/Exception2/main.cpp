#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "�������� ���� �Է�: ";
    cin >> a;
    if(a < 0)
    {
        cout << a << "�� ����";
    }
    else
    {
        cout << "������ ���� �Է�: ";
        cin >> b;
        if(b == 0)
            cout << "������ ���� 0���� �Է���" << endl;
        else if(b < 0)
            cout << "������ ���� " << b << " �Էµ�" << endl;
        else
            cout << "������ ���: " << a/b << endl;
    }

    return 0;
}
