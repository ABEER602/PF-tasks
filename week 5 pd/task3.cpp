#include <iostream>
using namespace std;
void taxcalculator(string type , float price);
main ()
{
string type;
float price;
float result;
cout << "enter vehicle type:";
cin >> type;
cout << "enter total price:";
cin >> price;
taxcalculator( type , price);
}
void taxcalculator(string type , float price)
{
float tax_amount, final_Price;
char code;
cout << "enter code :" << code;
cin >> code;
if  (type == "motorcycle")
{
  if (code == 'M')
  {
  tax_amount = price * 0.06;
  cout << "your amount is " << tax_amount<<endl;
  }
}
if  (type == "electric")
{
  if (code == 'E')
  {
  tax_amount = price * 0.08;
  cout << "your amount is " << tax_amount <<endl;
  }
}
if  (type == "sedan")
{
   if (code == 'S')
  {
  tax_amount = price * 0.06;
  cout << "your amount is " << tax_amount<< endl;
  }
}
if  (type == "van")
{
  if (code == 'V')
  {
  tax_amount = price * 0.12;
  cout << "your amount is " << tax_amount << endl;
  }
}
if  (type == "truck")
{
  if (code == 'T')
  {
  tax_amount = price * 0.15;
  cout << "your amount is " << tax_amount <<endl;
}
}
final_Price = tax_amount + price;
cout << "your final price is :" << final_Price;
}



