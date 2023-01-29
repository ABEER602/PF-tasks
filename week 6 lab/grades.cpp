#include <iostream>
using namespace std;
char checkResult(int marks);
main()
{
int marks ;
char result;
cout << " enter your marks";
cin >> marks;
result =checkResult(marks);
cout << result;
}
char checkResult(int marks)
{
char grade;
if (marks > 85)
{
grade = 'A';
}
else if (marks >= 81 && marks <=85)
{
grade = 'B';
}
else if (marks >= 71 && marks <= 80)
{
grade ='C';
}
else if (marks >= 61 && marks <= 70)
{
grade ='D';
}
else if (marks >= 50 && marks <= 60)
{
grade ='E';
}
else 
{
grade ='F';
}
return grade;
}
