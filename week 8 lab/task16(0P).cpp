#include<iostream>
using namespace std;
main()
{
int index;
cout << "MENTION HOW MANY NUMBERS YOU WANNA ENTER:";
cin >> index;
int array[index];
for(int i = 0; i < index; i++)
{
    cout << "ENTER NUMBERS:" << endl;
    cin >> array[i];
     if ( i > 0 && (array[i] == array[i - 1]))
    {
        cout << "ALREADY ENTERED:";
    }
}
}