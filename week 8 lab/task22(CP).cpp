#include <iostream>
using namespace std;
int main()
{
float money;
cout << "ENTER MONEY WHICH YOU HAVE TO PAY" << endl;
cin >> money;
float change[4];
for (int i=0 ; i < 4; i++)
{
    cout << "ENTER CHANGE IN YOUR POCKET(in quarter, dime , nickel , penny)" << endl;
    cin >> change[i];
}
  float mult  = change[0] * 0.25;
  float mult1 = change[1] * 0.10;
  float mult2 = change[2] * 0.05;
  float mult3 = change[3] * 0.01;
  float add = mult + mult1 + mult2 + mult3 ;
  if (add >= money )
  {
        cout << "true" << endl;
  }
  if (add < money )
  {
        cout << "false" << endl;
  }
  return 0;
}