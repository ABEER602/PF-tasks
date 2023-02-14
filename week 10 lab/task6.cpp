#include <iostream>
using namespace std;
main()
{
    int index;
    cout << "ENETR HOW MANY NUMBERS YOU WANT TO SORT"<< endl;
    cin >> index;
    int array[index] ;
    int result;
      for (int i = 0; i < index; i++)
{
    cout << "ENTER NUMBERS"<< endl;
    cin >> array[i];
}
    for (int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (array[j] < array[i])
            {
                result = array[i];
                array[i] = array[j];
                array[j] = result;
            }
        }
    }
    cout << "arranged array: ";
    for (int i = 0; i < index; i++)
    {
        cout << array[i] << " ";
    }
}