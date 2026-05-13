/*
Input a year and check:

Leap year if:
divisible by 4 AND not divisible by 100
OR divisible by 400

👉 Focus: logical operators && and ||

*/
#include <iostream>
using namespace std;
int main()
{
  int leapYear = 0;
  cout << "Enter Year to checker whether it is Leap Year or not : ";
  cin >> leapYear;
  cout << endl;
  if ((leapYear % 4 == 0 && leapYear % 100 != 0) || (leapYear % 400 == 0))
  {
    cout << "It is a Leap Year " << endl;
  }
  else
  {
    cout << "It is not Leap Year " << endl;
  }
}