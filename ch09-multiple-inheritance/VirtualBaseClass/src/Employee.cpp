#include "Employee.h"

Employee::Employee()
{
    strName = nullptr;
    strAddr = nullptr;
}

Employee::Employee(char* pName, char* pAddr)
{
    strName = new char[strlen(pName)+1];
    strAddr = new char[strlen(pAddr)+1];
    strcpy(strName, pName);
    strcpy(strAddr, pAddr);
}

Employee::~Employee()
{
    cout << "test" <<endl;
}
