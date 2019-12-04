#include <iostream>

using namespace std;

class MyDeposit
{
    friend class FriendDeposit;
public:
    MyDeposit();
    ~MyDeposit();

private:
    char *strName;
    double dBalance;
};

class FriendDeposit
{
public:
    FriendDeposit(MyDeposit md);
    ~FriendDeposit();

private:
    char *strFName;
    double dFBalance;
};

int main()
{
    MyDeposit md;
    FriendDeposit fd(md);

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
FriendDeposit::FriendDeposit(MyDeposit md)
{
    cout << "name: " << md.strName << endl;
    cout << "balance: " << md.dBalance << endl;
}
FriendDeposit::~FriendDeposit()
{
    //
}

