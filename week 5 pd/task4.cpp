#include <iostream>
using namespace std;
main()
{
    float days;
    float workers; 
    float hours; 
    float daysToTrain;
    float workingHours;
    float totalHours;
    float timeLeft;
    float daysLeft;
    cout << "enter total hours required:";
    cin >> hours;
    cout << "enter total days required:";
    cin >> days;
    cout << "enter total workers required:";
    cin >> workers;
    
    daysToTrain = days * 0.1;
    daysLeft = days - daysToTrain;
    workingHours = daysLeft * 10; 
    totalHours = workers *  workingHours;
    if (totalHours > hours)
    {
     timeLeft = totalHours - hours;
     cout << "yes!" << timeLeft << " hours are left";
    }
    
    if (totalHours < hours)
    {
     timeLeft =  hours - totalHours ;
     cout << "NOT enough time"<< timeLeft << " hours are needed";
    }
}
 