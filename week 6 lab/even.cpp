#include<iostream>
using namespace std;
main()
{
    int number ;
    cout << "enter any number:";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "even:";
    }
    else 
    {
        cout << "odd:";
    }
}