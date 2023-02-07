#include<iostream>
using namespace std;
main()
{
    int range;
    cout << "enter size of array:";
    cin >> range;
    int array[range];
    for (int index = 0 ; index < range; index++)
    {
    cout << "enter number:";
    cin >> array[index];
}
for (int index = 0 ; index < range; index++)
   {
     cout << "The value of the number is : " <<array[index] << endl;
   }
}