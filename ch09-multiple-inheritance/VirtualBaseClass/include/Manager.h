#ifndef MANAGER_H
#define MANAGER_H

#include "Regular.h"

class Manager : public virtual Regular
{
    public:
        Manager();
        Manager(char* pName, char* pAddr, double dSalary, double dIncentive);
        virtual ~Manager();
        double PayCheck() const;

    protected:
        double incentive;

    private:
};

#endif // MANAGER_H
