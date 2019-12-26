#include "Manager.h"

Manager::Manager()
{
    //ctor
}

Manager::Manager(char* pName, char* pAddr, double dSalary, double dIncentive)
    : Regular(pName, pAddr, dSalary)
{
    incentive = dIncentive;
}

Manager::~Manager()
{
    //dtor
}

double Manager::PayCheck() const
{
    return Regular::PayCheck() + incentive;
}
