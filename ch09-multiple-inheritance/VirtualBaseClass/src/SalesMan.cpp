#include "SalesMan.h"

SalesMan::SalesMan()
{
    //ctor
}

SalesMan::SalesMan(char* pName, char* pAddr, double dSalary, double dAllowance)
    : Regular(pName, pAddr, dSalary)
{
    allowance = dAllowance;
}

SalesMan::~SalesMan()
{
    //dtor
}

double SalesMan::PayCheck() const
{
    return Regular::PayCheck() + allowance;
}
