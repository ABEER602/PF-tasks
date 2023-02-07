#include <iostream>
using namespace std;
main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ENTER NUMBER";
        cin >> numbers[i];
    }
    cout << numbers[0] << endl;
    cout << numbers[4] << endl;
}