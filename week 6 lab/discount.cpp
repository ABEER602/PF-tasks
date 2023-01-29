# include <iostream>
using namespace std;
float myfunc(string day , string month ,int amount);
main()
{
  float amount;
  string day;
  string month;
  float result;
  cout << " enter day:";
  cin >> day;
  cout << " enter month:";
  cin >> month;
  cout << " enter amount :";
  cin >> amount;
  result = myfunc(day ,month ,amount);
  cout << result;
}
float myfunc(string day , string month ,int amount)
{
  float payable= amount;
  if (day == "sunday" )
  {
  if (month == "october")
  {
   payable = amount - (amount * 0.1);
  }
  else 
  {
   payable = amount -(amount * 0.05);
  }
}
return payable;
}



 