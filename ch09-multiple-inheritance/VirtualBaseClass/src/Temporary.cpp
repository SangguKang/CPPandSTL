#include "Temporary.h"

Temporary::Temporary()
{
    //ctor
}

Temporary::Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays)
    : Employee(pName, pAddr)
{
    dailyPayCheck = dDailyPayCheck;
    days = nDays;
}

Temporary::~Temporary()
{
    //dtor
}

double Temporary::PayCheck() const
{
    return dailyPayCheck * days;
}