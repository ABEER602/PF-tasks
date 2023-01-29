#include <iostream>
using namespace std;
float myFunc (char code , char time , int duration);
main ()
{
    char code;
    char time;
    int duration;
    float result;
    cout << " enter which type of customer you are (residential or premium) select (r/p):";
    cin >> code;
    cout << "Press d for day time and n for night time:";
    cin >> time;
    cout << " enter duration of your call:";
    cin >> duration;
    result = myFunc (code ,  time , duration);
    cout << result;

}
float myFunc (char code , char time , int duration)
{
    float charges;
    if (code == 'r' )
    {
        if (duration <= 50)
        {
        charges = 10.00;
        }
        else if (duration > 50)
        {
            charges = 10.00 +(0.20* (duration - 50));
        }
    }
if (code == 'p' && time == 'd')
    {
        if (duration <= 75)
        {
        charges = 25.00;
        }
        else if (duration > 75)
        {
            charges = 25.00 +(0.10 * (duration - 75));
        }
    }
    if (code == 'p' && time == 'n')
    {
        if (duration <= 100)
        {
        charges = 25.00;
        }
        else if (duration > 100)
        {
            charges = 25.00 +(0.05 * (duration - 100));
        }
    }
    return charges;
}
