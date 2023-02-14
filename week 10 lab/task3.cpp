#include <iostream>
using namespace std;
main()
{
    int index;
    cout << "MWNTION HOW MANY NUMBERS YOU WANT TO ENETR:" << endl;
    cin >> index;
    int array[index];
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER NUMBERS" << endl;
        cin >> array[i];
    }
    for (int i = 1 ; i < index - 1; i++)
    {
            if (array[i] > array[i - 1] && array[i ] > array[i + 1])
            {
                cout << array[i ] << ",";
                count++;
            }
        
    }
    if (count == 0)
    {
        cout << "PEAK DOES NOT FIND" << endl;
    }
}