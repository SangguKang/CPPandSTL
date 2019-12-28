#include "SalesManager.h"

SalesManager::SalesManager()
{
    //ctor
}

SalesManager::SalesManager(char* pName, char* pAddr, double dSalary, double dAllowance, double dIncentive)
    : Regular(pName, pAddr, dSalary), SalesMan(pName, pAddr, dSalary, dAllowance),
      Manager(pName, pAddr, dSalary, dIncentive)
{
    allowance = dAllowance;
    incentive = dIncentive;
}

SalesManager::~SalesManager()
{
    //dtor
}

double SalesManager::PayCheck() const
{
    return Manager::PayCheck() + SalesMan::PayCheck() - Regular::PayCheck();
}