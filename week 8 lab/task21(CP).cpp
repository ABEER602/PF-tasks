#include<iostream>
using namespace std;
main()
{
    int num1[2];
    for (int i = 0; i < 2 ; i++)
    {
        cout << "ENTER ANY TWO NUMBERS:";
        cin >> num1[i];
    }
    int index;
    cout << "ENTER HOW MANY NUMBERS YOU WANT TO ENTER:";
    cin >> index;
    int num2[index];
    for ( int i = 0; i < index ; i++)
    {
        cout << "ENTER NUMBERS:";
        cin >> num2[i];
    }
     cout << num1[0];
     for ( int i = 0; i < index ; i++)
    {
        cout << " "  << num2[i] << " ";
    }
    cout << num1[1];
    
}