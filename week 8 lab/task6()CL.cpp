#include <iostream>
using namespace std;
main()
{
    int size=0;
    cout << "ENTER SIZE OF ARRAY:";
    cin >> size;
    int number[size];
    int sum = 0;
    int average = 0;
    for (int index = 0 ; index < size ; index ++)
    {
        cout << "ENter number:";
        cin >> number[index];
    }
    for (int index = 0 ; index < size ; index ++)
      {
       
        sum = sum + number[index];
        average = sum / size;
      }
      cout << "The sum is :" << sum << endl ;
      cout << "The average is : "<< average << endl;
}