#include <iostream>

using namespace std;

class Deposit
{
public:
    Deposit();
    Deposit(char *name, double balance);
    ~Deposit();
    void BankBalance();
    static void SetInterestRate(double dNewRate);
    static double GetInterestRate();

private:
    char *strName;
    double dBalance;
    static double dInterestRate;
    static int nCount;
};

double Deposit::dInterestRate = 0.05;
int Deposit::nCount = 0;

int main()
{
    #if 0
    //without creating object, static member is able to b changed.
    Deposit::SetInterestRate(0.03);
    cout << "Interest Rate: " << Deposit::GetInterestRate() << endl;
    #else
    Deposit kim, lee;

    #endif // 0


    return 0;
}

Deposit::Deposit()
{
    nCount++;
    cout << "created object number: " << nCount << endl;
}
Deposit::Deposit(char *name, double balance)
{
    strName = name;
    dBalance = balance;
}
Deposit::~Deposit()
{
    nCount--;
    cout << "deleted object number: " << nCount << endl;
}

void Deposit::BankBalance()
{
    dBalance += dBalance * dInterestRate;
}

void Deposit::SetInterestRate(double dNewRate)
{
    dInterestRate = dNewRate;
}

double Deposit::GetInterestRate()
{
    return dInterestRate;
}


