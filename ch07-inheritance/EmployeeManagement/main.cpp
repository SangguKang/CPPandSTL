#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;

int main()
{
    Regular rgl("���ּ�", "�д籸 ������", 300);
    Temporary tmp("����ȭ", "��ȱ� ������", 10, 20);
    SalesMan slm("�ں���", "���뱸 ��ź��", 100, 50);

    Department dept;
    dept.AddEmployee(rgl);
    dept.AddEmployee(tmp);
    dept.AddEmployee(slm);
    dept.Display();

    return 0;
}
