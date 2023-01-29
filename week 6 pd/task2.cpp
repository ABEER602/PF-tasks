#include <iostream>
using namespace std;
void Myfunc (string name,int sub_1, int sub_2, int sub_3,int sub_4,int sub_5);
main()
{
    string name;
    int sub_1;
    int sub_2;
    int sub_3;
    int sub_4;
    int sub_5;
    cout << "enter your name ";
    cin >> name;
    cout << "enter marks of subject 1:";
    cin >> sub_1;
    cout << "enter marks of subject 2:";
    cin >> sub_2;
    cout << "enter marks of subject 3:";
    cin >> sub_3;
    cout << "enter marks of subject 4:";
    cin >> sub_4;    
    cout << "enter marks of subject 5:";
    cin >> sub_5;
     Myfunc ( name, sub_1, sub_2, sub_3,sub_4, sub_5);
}
void Myfunc (string name,int sub_1, int sub_2, int sub_3,int sub_4,int sub_5)
{
    float total_marks;
    float percentage;
    string grade;
     total_marks = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
    percentage =  (total_marks /500)*(100);
    cout << name << endl;
    cout << total_marks << endl;
    cout << percentage << endl;
    if (percentage >= 90 && percentage <=100)
    {
        grade = "A+";
        cout << grade << endl;
    }
   else if (percentage >= 80 && percentage <=90)
    {
        grade = "A";
        cout << grade << endl;
    }
    else if (percentage >= 70 && percentage <=80)
    {
        grade = "B+";
        cout << grade << endl;
    }
    else if (percentage >= 60 && percentage <=70)
    {
        grade = "B";
        cout << grade << endl;
    }
    else if (percentage >= 50 && percentage <= 60)
    {
        grade = "C";
        cout << grade << endl;
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        grade = "D";
        cout << grade << endl;
    }
    else 
    {
        grade = "F";
        cout << grade << endl;
    }


}
