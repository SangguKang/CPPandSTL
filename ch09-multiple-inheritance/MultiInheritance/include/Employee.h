#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
    public:
        Employee();
        Employee(char* pName, char* pAddr);
//        virtual ~Employee();
        ~Employee();

        virtual double PayCheck() const = 0;    //pure virtual function

    protected:
        char* strName;
        char* strAddr;

    private:
};

#endif // EMPLOYEE_H
