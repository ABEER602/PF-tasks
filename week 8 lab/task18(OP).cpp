#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "ENTER HOW MANY NUMBERS YOU HAVE TO ENTER:";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "ENTER NUMBERS:";
        cin >> array[i];
    }
    int max_no = array[0];
     for (int i = 0; i < size ; i++)
    {
        if (array[i] > max_no )
        {
            max_no = array[i];
        }
    }
    cout << max_no << endl;


}