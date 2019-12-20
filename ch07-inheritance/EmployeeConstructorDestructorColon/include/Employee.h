#ifndef INIT_EMPLOYEE_H
#define INIT_EMPLOYEE_H

class Employee
{
    public:
        Employee();
        Employee(char* pName, char* pAddr);
        virtual ~Employee();
        void DisplayEmployee();

    protected:
        char* strName;
        char* strAddr;

    private:
};

class Regular : public Employee
{
public:
    Regular();
    Regular(char* pName, char* pAddr, double dSalary);
    virtual ~Regular();
    double PayCheck() const;
private:
    double salary;
};

class Temporary : public Employee
{
public:
    Temporary();
    Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays);
    virtual ~Temporary();
    double PayCheck() const;
private:
    double dailyPayCheck;
    int days;
};

#endif // INIT_EMPLOYEE_H
