#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
public:
    Employee();
    Employee(char* pName, char* pAddr);
    ~Employee();
    void DisplayEmployee();
private:
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
    cout << "call the constructor has two parameters" << endl;
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
    cout << "addr: " << strAddr << endl;
}

int main()
{
    Employee emp("이창현", "영통구 매탄동");

    emp.DisplayEmployee();

    return 0;
}
