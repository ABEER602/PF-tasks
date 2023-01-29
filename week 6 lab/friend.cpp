#include<iostream>
using namespace std;
main()
{
char friends;
char lecture;
cout << "do your friends are going to uni(press y for yes):"<<endl;
cin >> friends;
cout << "do you have lecture today (press y for yes):"<< endl;
cin >> lecture;
if (friends == 'y' && lecture == 'y')
{
    cout << "you are going to uni today ";
}
else 
{
    cout << " you are not going to uni today ";
}
}