/*
  Task:

Hardcoded username = "admin"
Password = "1234"

Rules:

If both correct → Login successful
If username wrong → "Invalid username"
If password wrong → "Wrong password"

👉 Focus: multiple string conditions
*/
#include <iostream>
using namespace std;
int main()
{
  string UserName = "admin";
  string Password = "1234";
  string UserInputName = "";
  string UserInputPassword = "";
  cout << "Enter UserName input : ";
  cin >> UserInputName;
  cout << endl;
  cout << "Enter UserPassword input : ";
  cin >> UserInputPassword;
  cout << endl;
  if (UserInputName == UserName && UserInputPassword == Password)
  {
    cout << "Login successful" << endl;
  }
  else
  {
    cout << "Incorrect Credentials " << endl;
  }
}