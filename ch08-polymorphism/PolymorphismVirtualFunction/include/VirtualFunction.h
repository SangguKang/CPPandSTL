#ifndef VIRTUALFUNCTION_H
#define VIRTUALFUNCTION_H

class Employee
{
    public:
        Employee();
        Employee(char* pName, char* pAddr);
        virtual ~Employee();

        void DisplayEmployee();
        virtual double PayCheck() const;

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

class SalesMan : public Regular
{
public:
    SalesMan();
    SalesMan(char* pName, char* pAddr, double dSalary, double dAllowance);
    ~SalesMan();
    double PayCheck() const;
private:
    double allowance;
};

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

#endif // VIRTUALFUNCTION_H
