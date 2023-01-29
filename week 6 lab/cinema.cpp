#include <iostream>
using namespace std;
float totalIncome (string screening, int rows , int colunms);
main()
{
int rows , colunms;
float result ;
string screening;
cout << " enter total rows :";
cin >> rows;
cout << " enter total colunms :";
cin >> colunms;
cout << " enter screening type :";
cin >> screening;
result =  totalIncome ( screening, rows ,colunms);
cout << result;
}
float totalIncome (string screening, int rows , int colunms)
{
float income;
if (screening == "premiere")
{
income = (12.00 * rows * colunms);
}
if (screening == "normal")
{
income = (7.50 * rows * colunms);
}
if (screening == "discount")
{
income = (5.00 * rows * colunms);
}
return income;
}


