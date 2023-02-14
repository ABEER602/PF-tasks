#include <iostream>
using namespace std;
int array[200];
main()
{
    int index;
    int cycle;
    int count = 0;
    cout << "ENTER HOw MANY NUMBERS YOU WANT TO CHECK" << endl;
    cin >> index;
    cout << "ENTER HOw MANY TIMES YOU WANT TO REPEAT THE CYCLE" << endl;
    cin >> cycle;
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER NUMBERS" << endl;
        cin >> array[i];
    }

    bool isBreak = true;
    for (int i = 0; cycle < index; i++)
    {
        if ((array[i] != array[cycle]) || (i > cycle))
        {
            isBreak = false;
        }
        cycle++;
    }

    if (isBreak == false)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}