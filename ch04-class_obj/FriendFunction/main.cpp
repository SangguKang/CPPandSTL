#include <iostream>

using namespace std;

class MyDeposit
{
public:
    friend void withdraw(MyDeposit md);
    MyDeposit();
    ~MyDeposit();
private:
    char* strName;
    double dBalance;
};

int main()
{
    MyDeposit md;
    withdraw(md);

    return 0;
}

MyDeposit::MyDeposit()
{
    strName = "ÀÌÃ¢Çö";
    dBalance = 1000;
}

MyDeposit::~MyDeposit()
{
    //
}

void withdraw(MyDeposit md)
{
    cout << "friend function withdraw: " << md.strName << endl;
    cout << "friend function withdraw: " << md.dBalance << endl;
}
