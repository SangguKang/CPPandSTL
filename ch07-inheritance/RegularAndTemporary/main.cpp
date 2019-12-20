#include <iostream>
#include <cstring>

using namespace std;
////////////////////////////////////////////////////////
class Employee
{
public:
    Employee();
    Employee(char* pName, char* pAddr);
    ~Employee();
    void DisplayEmployee();
    //void SetName(char* pName);//kdebug
//private:
protected:
    char* strName;
    char* strAddr;
};
Employee::Employee()
{
    cout << "call the basic constructor" << endl;
    strName = NULL;
    strAddr = NULL;
}
Employee::Employee(char* pName, char* pAddr)
{
    cout << "call the constructor has two parameters in Employee" << endl;
    strName = new char[strlen(pName) + 1];
    strAddr = new char[strlen(pAddr) + 1];
    strcpy(strName, pName);
    strcpy(strAddr, pAddr);
}
Employee::~Employee()
{
    //
}
void Employee::DisplayEmployee()
{
    cout << "name: " << strName << endl;
    cout << "address: " << strAddr << endl;
}
//void Employee::SetName(char* pName)//kdebug
//{
//    strName = pName;
//}
////////////////////////////////////////////////////////
class Regular : Employee
{
public:
    Regular();
    Regular(char* pName, char* pAddr, double dSalary);
    ~Regular();
    double PayCheck() const;
private:
    double salary;
};
Regular::Regular()
{
    //
}
Regular::Regular(char* pName, char* pAddr, double dSalary)
{
    cout << "call the constructor has three parameters in Regular" << endl;
    strName = pName;
    strAddr = pAddr;
    //SetName(pName);//kdebug
    salary = dSalary;
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}
Regular::~Regular()
{
    //
}
double Regular::PayCheck() const
{
    return salary;
}
////////////////////////////////////////////////////////
class Temporary : Employee
{
public:
    Temporary();
    Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays);
    ~Temporary();
    double PayCheck() const;
private:
    double dailyPayCheck;
    int days;
};
Temporary::Temporary()
{
    //
}
Temporary::Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays)
{
    cout << "call the construct has 4 parameters in Temporary " << endl;
    strName = pName;
    strAddr = pAddr;
    dailyPayCheck = dDailyPayCheck;
    days = nDays;
    cout << "Name: " << strName << endl;
    cout << "Address: " << strAddr << endl;
}
Temporary::~Temporary()
{
    //
}
double Temporary::PayCheck() const
{
    return dailyPayCheck * days;
}

int main()
{
    Employee emp("이창현", "영통구 매탄동");
    emp.DisplayEmployee();

    Regular rgl("이주성", "분당구 수내동", 300);
    cout << "Salary: " << rgl.PayCheck() << endl << endl;

    Temporary tmp("조경화", "장안구 조원동", 10, 20);
    cout << "Salary: " << tmp.PayCheck() << endl << endl;

    return 0;
}
