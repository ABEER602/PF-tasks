#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
float speed;
string result;
cout << " enter your speed :";
cin >> speed;
result =  checkSpeed (speed);
cout << result;
}
string checkSpeed(float speed)
{
string check;
if (speed < 10)
{
check = "very slow";
}
else if (speed>=11 && speed<=50)
{
check = "average";
}
else if (speed>=51 && speed<=150)
{
check = "fast";
}
else if (speed>=151 && speed <=1000)
{
check = "ultra fast";
}
else
{
check = "extremely fast";
}
return check;
}