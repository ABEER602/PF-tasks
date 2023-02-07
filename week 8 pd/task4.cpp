#include<iostream>
using namespace std;
void check7(int number);
main()
{
    int index;
    int check = 0;
    cout << "MENTION HOW MANY NUMBERS YOU WANT TO ENETR" << endl;
    cin >> index;
    int num[index];
    cout << "ENTER NUMBERS" << endl;
    for (int size=0 ; size < index ; size++)
    {
    cin >> num[size];
    cout << endl;
    }
   for (int size=0 ; size < index ; size++)
   {
    if (num[size] < 10)
    {
      if(num[size] == 7)
      {
        check++;
      }
    }
    else if(num[size] > 9)
    {
      int rem = num[size] % 10;
      int dev;
    if (rem == 7)
      {
        check++;
      }
      num[size] = num[size] / 10;
    }
   }
   if (check != 0)
   {
    cout << "BOOM!!!";
   }
   if (check == 0)
   {
    cout << "7 is not found";
   }


}

    
     



