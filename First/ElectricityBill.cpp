/*
2. Electricity Bill Calculator

Units input lo.

Rules:

0–100 → Rs 10/unit
101–200 → Rs 15/unit
200+ → Rs 20/unit

Final bill print karo.

Thinking: conditions ka use

*/
#include <iostream>
using namespace std;
int main()
{
  double Units = 0;
  cout << "Enter Units : " << endl;
  cin >> Units;
  if (Units > 0 && Units <= 100)
  {
    cout << "Price of of units " << Units << "is : 10Rs/unit ";
  }
  else if (Units > 101 && Units <= 200)
  {
    cout << "Price of of units " << Units << "is : 15Rs/unit ";
  }
  else
  {
    cout << "Price of of units " << Units << "is : 20Rs/unit ";
  }
}