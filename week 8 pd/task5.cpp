#include <iostream>
using namespace std;
main()
{
    string arr[4];
    int count = 0;
    for (int size = 0; size < 4; size++)
    {
        cout << "ENTER STRING";
        cin >> arr[size];
    }
    for (int size = 0; size < 4; size++)
    {
        if (arr[0] == arr[size])
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }
    if (count == 0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}