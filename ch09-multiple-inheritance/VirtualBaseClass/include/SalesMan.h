#ifndef SALESMAN_H
#define SALESMAN_H

#include "Regular.h"

class SalesMan : public virtual Regular
{
    public:
        SalesMan();
        SalesMan(char* pName, char* pAddr, double dSalary, double dAllowance);
        virtual ~SalesMan();
        double PayCheck() const;

    protected:
        double allowance;

    private:
};

#endif // SALESMAN_H
