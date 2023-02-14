#include <iostream>
using namespace std;
main()
{
    int index = 0;
    int result = 0;
    cout << "MENTION HOW MANY SIZES YOU WANNA ENTER" << endl;
    cin >> index;
    int volume[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER SIZES" << endl;
        cin >> volume[i];
    }
    for (int i = 0; i < index; i = i + 3)
    {

        result =( result + (volume[i] * volume[i + 1] * volume[i + 2]));
    }
    cout << result;
}