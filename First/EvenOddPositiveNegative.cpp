/*
nput a number and print:

Even + Positive
Even + Negative
Odd + Positive
Odd + Negative
Zero (special case)

👉 Focus: multiple conditions together*/

#include <iostream>
using namespace std;
void EvenPostive(int);
void EvenNegative(int);
void OddPostive(int);
void OddNegative(int);
void Display();
int main()
{
  int number;
  cout << "Enter Number : ";
  cin >> number;
  cout << endl;
  Display();
  int choice;
  cout << "Enter your choice : ";
  cin >> choice;
  switch (choice)
  {
  case 1:
    EvenPostive(number);
    break;
  case 2:
    EvenNegative(number);
    break;
  case 3:
    OddPostive(number);
    break;
  case 4:
    OddNegative(number);
    break;
  default:
    cout << number << "is non of above it is neutral " << endl;
  }
}
void Display()
{
  cout << "Number is Even and Positive ? \n Number is Even and Negative \n Number is Odd and Postive \n Number is Odd and Negative ?" << endl;
}
void EvenPostive(int number1)
{
  if (number1 % 2 == 0 && number1 > 0)
  {
    cout << number1 << " is Positve and Even " << endl;
  }
  else
  {
    cout << number1 << " is not Even and Postive" << endl;
  }
}
void EvenNegative(int number)
{
  if (number % 2 == 0 && number < 0)
  {
    cout << number << " is Even and Negative " << endl;
  }
  else
  {
    cout << number << " is not Even and Negative" << endl;
  }
}
void OddPostive(int number1)
{
  if (number1 % 2 != 0 && number1 > 0)
  {
    cout << number1 << " is Positve and Odd " << endl;
  }
  else
  {
    cout << number1 << " is not Odd and Postive" << endl;
  }
}

void OddNegative(int number)
{
  if (number % 2 != 0 && number < 0)
  {
    cout << number << " is Odd and Negative " << endl;
  }
  else
  {
    cout << number << " is not Odd and Negative" << endl;
  }
}