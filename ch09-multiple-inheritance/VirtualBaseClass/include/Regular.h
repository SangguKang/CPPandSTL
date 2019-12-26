#ifndef REGULAR_H
#define REGULAR_H

#include "Employee.h"

class Regular : public Employee
{
    public:
        Regular();
        Regular(char* pName, char* pAddr, double dSalary);
        virtual ~Regular();
        double PayCheck() const;

    protected:
        double salary;

    private:
};

#endif // REGULAR_H
