#include <iostream>
#include "VirtualFunction.h"
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
