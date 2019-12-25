#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    public:
        Employee();
        Employee(char* pName, char* pAddr);
        virtual ~Employee();
        virtual double PayCheck() const = 0;

    protected:
        char* strName;
        char* strAddr;

    private:
};

#endif // EMPLOYEE_H
