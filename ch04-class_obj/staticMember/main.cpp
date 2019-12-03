#include <iostream>

using namespace std;

class Deposit
{
public:
    Deposit();
    Deposit(char *name, double balance);
    void BankBalance();
    static void SetInterestRate(double dNewRate);
    static double GetInterestRate();

private:
    char *strName;
    double dBalance;
    static double dInterestRate;
};

double Deposit::dInterestRate = 0.05;

int main()
{
    #if 1
    //without creating object, static member is able to b changed.
    Deposit::SetInterestRate(0.03);
    cout << "Interest Rate: " << Deposit::GetInterestRate() << endl;
    #else
    Deposit kim, lee;

    cout << "Interest Rate1: " << Deposit::GetInterestRate() << endl;
    cout << "Interest Rate2: " << kim.GetInterestRate() << endl;
    cout << "Interest Rate3: " << lee.GetInterestRate() << endl;

    kim.SetInterestRate(0.03);
    cout << "Interest Rate1: " << Deposit::GetInterestRate() << endl;
    cout << "Interest Rate2: " << kim.GetInterestRate() << endl;
    cout << "Interest Rate3: " << lee.GetInterestRate() << endl;
    #endif // 0


    return 0;
}

Deposit::Deposit()
{
    //
}
Deposit::Deposit(char *name, double balance)
{
    strName = name;
    dBalance = balance;
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


