#include <iostream>
#include <cstring>
#include "Employee.h"

using namespace std;

Employee::Employee()
{
    cout << "Call parent class constructor" << endl;
    strName = nullptr;
    strAddr = nullptr;
}
Employee::Employee(char* pName, char* pAddr)
{
    cout << "Call constructor which has two Employee parameters" << endl;
    strName = new char[strlen(pName)+1];
    strAddr = new char[strlen(pAddr)+1];
    strcpy(strName, pName);
    strcpy(strAddr, pAddr);
}
Employee::~Employee()
{
    //dtor
}
void Employee::DisplayEmployee()
{
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}

Regular::Regular()
{
    //
}
Regular::Regular(char* pName, char* pAddr, double dSalary)
{
    cout << "Call constructor which has three Regular parameters" << endl;
    strName = pName;
    strAddr = pAddr;
    salary = dSalary;
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}
Regular::~Regular()
{
    //
}
double Regular::PayCheck() const
{
    return salary;
}

Temporary::Temporary()
{
    //
}
Temporary::Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays)
{
    cout << "Call constructor which has four Temporary parameters" << endl;
    strName = pName;
    strAddr = pAddr;
    dailyPayCheck = dDailyPayCheck;
    days = nDays;
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}
Temporary::~Temporary()
{
    //
}
double Temporary::PayCheck() const
{
    return dailyPayCheck * days;
}

