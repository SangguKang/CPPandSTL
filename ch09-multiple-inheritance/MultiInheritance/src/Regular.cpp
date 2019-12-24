#include "Regular.h"

Regular::Regular()
{
    //ctor
}

Regular::Regular(char* pName, char* pAddr, double dSalary) : Employee(pName, pAddr)
{
    salary = dSalary;
}

Regular::~Regular()
{
    //dtor
}

double Regular::PayCheck() const
{
    return salary;
}
