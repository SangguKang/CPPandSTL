#include <iostream>
#include "VirtualFunction.h"
using namespace std;

int main()
{
    Regular rgl("이주성", "분당구 수내동", 300);
    Temporary tmp("조경화", "장안구 조원동", 10, 20);
    SalesMan slm("박복순", "영통구 매탄동", 100, 50);

    Department dept;
    dept.AddEmployee(rgl);
    dept.AddEmployee(tmp);
    dept.AddEmployee(slm);
    dept.Display();

    return 0;
}
