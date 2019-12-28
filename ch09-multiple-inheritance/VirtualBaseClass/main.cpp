#include <iostream>
#include "SalesMan.h"
#include "Manager.h"
#include "SalesManager.h"using namespace std;

int main()
{
    SalesMan saleMan("", "", 200, 300);
    cout << "영업의 급여 총액: " << saleMan.PayCheck() << "원" << endl;

    Manager mgr("", "", 300, 400);
    cout << "관리자의 급여 총액: " << mgr.PayCheck() << "원" << endl;

    SalesManager saleMgr("이창현", "수원시 영통구", 200, 300, 400);
    cout << "영업 관리자의 급여 총액: " << saleMgr.PayCheck() << "원" << endl;

    return 0;
}