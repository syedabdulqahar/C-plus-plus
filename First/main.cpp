#include <iostream>
using namespace std;
int main()
{
    double mobile_balance = 0;
    double recharge_amount = 0;
    cout << "Enter Mobile Balance : " << endl;
    cin >> mobile_balance;
    cout << "Enter Recharge Amount : " << endl;
    cin >> recharge_amount;

    double total_amount = mobile_balance + recharge_amount;
    if (total_amount < 100)
    {
        cout << "Low Balance";
    }
    else
    {
        cout << "Your Total Balance : " << total_amount << endl;
    }
}
/*
1. Mobile Balance Checker

Ek program banao jo user se current mobile balance aur recharge amount le.

Program bataye:

total balance
agar balance 100 se kam ho toh warning:
"Low Balance"

Real world: Jazz/Easypaisa balance check

*/