#include <iostream>
using namespace std;
main()
{
    int index;
    int transform;
    cout << "MENTION HOW MANY NUMBERS YOU WANT TO ENTER" << endl;
    cin >> index;
    cout << "ENTER HOW MANY TIMES EVEN-ODD TRANSFORMATION NEED TO BE DONE" << endl;
    cin >> transform;
    int arr[index];
    for (int size = 0; size < index; size++)
    {
        cout << "ENTER NUMBER";
        cin >> arr[size];
    }
    for (int size = 0; size < index; size++)
    {
        for (int i = 0; i < transform; i++)
        {
            if (arr[size] % 2 == 0)
            {
                arr[size] = arr[size] - 2;
            }
            else if (arr[size] % 2 != 0)
            {
                arr[size] = arr[size] + 2;
            }
        }
    }
    for (int size = 0; size < index; size++)
    {
        cout<< arr[size] <<" "<<"," << " ";
    }
}