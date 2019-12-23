#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Employee.h"

class Department
{
    public:
        Department();
        virtual ~Department();

        void AddEmployee(Employee& emp);
        void Display() const;

    protected:

    private:
        int count;
        Employee* employee[10];
};

#endif // DEPARTMENT_H
