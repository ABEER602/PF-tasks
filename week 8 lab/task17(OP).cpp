#include<iostream>
using namespace std;
main()
{
    int index;
    int number;
    int result = 0;
    cout  << "ENETR HOW MANY NUMBERS YOU WANT TO ENTER"<< endl;
    cin >> index;
 cout  << "ENETR NUMBER WHICH YOU WANT TO MULTIPLY"<< endl;
    cin >> number;
    int array[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER NUMBERS" << endl;
        cin >> array[i];
    }
    for (int i = 0; i < index; i++)
    {
       result = result + (number * array[i]);
    }
    cout << result;
}