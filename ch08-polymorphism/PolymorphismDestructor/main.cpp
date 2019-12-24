#include <iostream>
#include "Destructor.h"
using namespace std;

int main()
{
    Parent *pParent = new Child;
    delete pParent;

    return 0;
}
