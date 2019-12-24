#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H

#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent constructor" << endl;
    }
    virtual ~Parent()
    {
        cout << "Parent destructor" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child constructor" << endl;
    }
    ~Child()
    {
        cout << "Child destructor" << endl;
    }
};

#endif // DESTRUCTOR_H
