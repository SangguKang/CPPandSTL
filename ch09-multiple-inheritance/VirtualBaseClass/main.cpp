#include <iostream>
#include "SalesMan.h"
#include "Manager.h"
#include "SalesManager.h"using namespace std;

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