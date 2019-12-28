#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
    public:
        Employee();
        Employee(char* pName, char* pAddr);
        virtual ~Employee();
        virtual double PayCheck() const = 0;

    protected:
        char* strName;
        char* strAddr;

    private:
};

#endif // EMPLOYEE_H