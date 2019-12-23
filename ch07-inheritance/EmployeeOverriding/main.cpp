#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee emp("이창현", "영통구 매탄동");
    emp.DisplayEmployee();

    Regular rgl("이주성", "분당구 수내동", 300);
    cout << "Salary: " << rgl.PayCheck() << endl << endl;

    Temporary tmp("조경화", "장안구 조원동", 10, 20);
    cout << "Salary: " << tmp.PayCheck() << endl << endl;

    SalesMan slm("박복순", "영통구 매탄동", 100, 50);
    cout << "Salary: " << slm.PayCheck() << endl << endl;

    return 0;
}
