#include "Department.h"
#include <iostream>
using namespace std;

Department::Department()
{
    count = 0;
}

Department::~Department()
{
    //dtor
}

void Department::AddEmployee(Employee& emp)
{
    employee[count] = &emp;
    count++;
}

void Department::Display() const
{
    for(int i=0; i<count; i++)
    {
        employee[i]->DisplayEmployee();
        cout << "Salary: " << employee[i]->PayCheck() << endl;
    }
}
