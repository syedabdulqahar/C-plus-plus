/*
3. ATM Withdrawal

User:
current balance
withdrawal amount
Check:
amount balance se zyada na ho
amount 500 ke multiple mein ho
Output:
success / failed
Real world: ATM validation
*/
#include <iostream>
using namespace std;
int main()
{
  // 1. amount withdrawl 500 divisible
  // 2. amound <balance
  bool success = true;
  double Balance = 50000;
  double Withdraw_Amount = 0;
  cout << Balance << " is your balance" << endl;
  cout << "Enter Amount to be withdrawn : ";
  cin >> Withdraw_Amount;
  if (Balance < Withdraw_Amount)
  {
    success = false;
    cout << "Balance is unsufficient than your withdrawn amount |  Balance : " << Balance << " and Withdrawl : " << Withdraw_Amount << endl;
  }
  else if ((int)Withdraw_Amount % 500 != 0)
  {
    cout << "Waithdrawal Failed: Amount should be in multiple of 500 " << endl;
    success = false;
  }

  if (success)
  {
    Balance -= Withdraw_Amount;
    cout << "Withdrawal Successful " << endl;
    cout << "Remaining Balance : " << Balance << endl;
  }
}