#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
    Employee emp("��â��", "���뱸 ��ź��");
    emp.DisplayEmployee();

    Regular rgl("���ּ�", "�д籸 ������", 300);
    cout << "Salary: " << rgl.PayCheck() << endl << endl;

    Temporary tmp("����ȭ", "��ȱ� ������", 10, 20);
    cout << "Salary: " << tmp.PayCheck() << endl << endl;

    return 0;
}
