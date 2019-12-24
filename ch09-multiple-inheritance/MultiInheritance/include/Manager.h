#ifndef MANAGER_H
#define MANAGER_H

#include "Regular.h"

class Manager : public Regular
{
    public:
        Manager();
        Manager(char* pName, char* pAddr, double dSalary, double dIncentive);
//        virtual ~Manager();
        ~Manager();

        double PayCheck() const;

    protected:
        double incentive;

    private:
};

#endif // MANAGER_H
