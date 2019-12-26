#ifndef TEMPORARY_H
#define TEMPORARY_H

#include "Employee.h"

class Temporary : public Employee
{
    public:
        Temporary();
        Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays);
        virtual ~Temporary();
        double PayCheck() const;

    protected:

    private:
        double dailyPayCheck;
        int days;
};

#endif // TEMPORARY_H
