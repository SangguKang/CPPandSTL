#ifndef SALESMANAGER_H
#define SALESMANAGER_H
#include "Manager.h"
#include "SalesMan.h"

class SalesManager : public Manager, public SalesMan
{
    public:
        SalesManager();
        SalesManager(char* pName, char* pAddr, double dSalary, double dAllowance, double dIncentive);
        virtual ~SalesManager();
        double PayCheck() const;

    protected:

    private:
};

#endif // SALESMANAGER_H