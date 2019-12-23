#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    cout << "0. Call parent class constructor" << endl;
    strName = nullptr;
    strAddr = nullptr;
}
Employee::Employee(char* pName, char* pAddr)
{
    cout << "1. Call constructor which has two Employee parameters" << endl;
    strName = new char[strlen(pName)+1];
    strAddr = new char[strlen(pAddr)+1];
    strcpy(strName, pName);
    strcpy(strAddr, pAddr);
}
Employee::~Employee()
{
    cout << "1. Call destructor Employee" << endl;
}

void Employee::DisplayEmployee()
{
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}
double Employee::PayCheck() const
{
    return 0.0;
}

///////////////////////////////
Regular::Regular()
{
    cout << "*** Call Regular basic constructor" << endl;
}
Regular::Regular(char* pName, char* pAddr, double dSalary)
    : Employee(pName, pAddr)
{
    cout << "2. Call constructor which has three Regular parameters" << endl;
    salary = dSalary;
//    cout << "Name: " << strName << endl;
//    cout << "Address: " << strAddr << endl;
}
Regular::~Regular()
{
    cout << "2. Call destructor Regular" << endl;
}

double Regular::PayCheck() const
{
    return salary;
}

///////////////////////////////
Temporary::Temporary()
{
    cout << "*** Call Temporary basic constructor" << endl;
}
Temporary::Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays)
    : Employee(pName, pAddr)
{
    cout << "3. Call constructor which has four Temporary parameters" << endl;
    dailyPayCheck = dDailyPayCheck;
    days = nDays;
//    cout << "Name: " << strName << endl;
//    cout << "Address: " << strAddr << endl;
}
Temporary::~Temporary()
{
    cout << "3. Call destructor Temporary" << endl;
}

double Temporary::PayCheck() const
{
    return dailyPayCheck * days;
}

///////////////////////////////
SalesMan::SalesMan()
{
    cout << "*** Call SalesMan basic constructor" << endl;
}
SalesMan::SalesMan(char* pName, char* pAddr, double dSalary, double dAllowance)
    : Regular(pName, pAddr, dSalary)
{
    cout << "4. Call constructor which has four SalesMan parameters" << endl;
    allowance = dAllowance;
//    cout << "Name: " << strName << endl;
//    cout << "Address: " << strAddr << endl;
}
SalesMan::~SalesMan()
{
    cout << "3. Call destructor SalesMan" << endl;
}
double SalesMan::PayCheck() const
{
    return Regular::PayCheck() + allowance;
}
