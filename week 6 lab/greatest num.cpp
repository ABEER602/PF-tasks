#include <iostream>
using namespace std;
int myfunc(int num1 , int num2 , int num3);
int main()
{
int num1 ;
int num2 ;
int num3 ;
int result ;
cout << "enter number 1:";
cin >> num1;
cout << "enter number 2:";
cin >> num2;
cout << "enter number 3:";
cin >> num3;
result =  myfunc(num1 ,  num2 ,  num3);
cout << "greater number is" << result;
}
int myfunc(int num1 , int num2 , int num3)
{
int greatest;
if (num1 > num2 && num1 > num3)
{
 greatest= num1;
}
if (num2 > num1 && num2 > num3)
{
greatest= num2;
}
if (num3 > num2 && num3 > num1)
{
greatest= num3;
}
return greatest; 
}


