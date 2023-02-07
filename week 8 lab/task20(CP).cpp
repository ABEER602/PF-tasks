#include <iostream>
using namespace std;
main()
{
    float array[3];
    for (int i = 0; i < 3 ; i++)
    {
        cout << "ENTER ANY 3 RESISTANCE:";
        cin >> array[i];
    }
    float sum=0;
     for (int i = 0; i < 3 ; i++)
    {
        sum = sum + array[i];
    }
    cout << sum << " " << "ohms";
}