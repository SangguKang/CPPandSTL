#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Regular.h"
#include "SalesMan.h"
#include "SalesManager.h"
using namespace std;

int main()
{
    SalesMan saleMan("", "", 200, 300);
    cout << "������ �޿� �Ѿ�: " << saleMan.PayCheck() << "��" << endl;

    Manager mgr("", "", 300, 400);
    cout << "�������� �޿� �Ѿ�: " << mgr.PayCheck() << "��" << endl;

    SalesManager saleMgr("��â��", "������ ���뱸", 200, 300, 400);
    cout << "���� �������� �޿� �Ѿ�: " << saleMgr.PayCheck() << "��" << endl;
    return 0;
}
