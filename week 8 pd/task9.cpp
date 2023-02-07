#include <iostream>
using namespace std;
string danceconvert(string pin)
{
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string output = "";
    bool valid = true;
    for (int i = 0; i < 4; i++)
    {
        int assci = pin[i];
        int number = assci - 48;
        if ((assci < 48) || (assci > 57))
        {
            valid = false;
            break;
        }

        int pickupindex = number + i;
        if (pickupindex >= 10) pickupindex = pickupindex - 10;
            output = output + moves[pickupindex]+",";
        
    }
    if (valid)
    {
        return output;
    }
    else
    {
        return "invalid output";
    }
}
main()
{
    string pin;
    cout << "ENTER YOUR PIN" << endl;
    cin >> pin;
    if (pin.length() == 4)
    cout << danceconvert(pin);
    else
    cout << "PIN IS WRONG" << endl;
}
