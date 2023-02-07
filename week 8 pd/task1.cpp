#include<iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guvava","watermelon"};
    int price[4]= {60,70,40,30};
    string name;
    int quantity;
    int found = -1;
    cout << "NAME OF FRUIT YOU WANT TO BUY:";
    cin >> name;
    cout << "QUANTITY OF FRUIT IN KG's:";
    cin >> quantity;
    for (int index=0 ; index < 4 ;index++)
    {
        if (fruit[index]==name)
        {
            found = index;
        }
    }
    if (found != -1)
    {
        cout << "your price is" << " "<< price[found] * quantity;
    }
    else
    {
        cout << "NOT AVAILABLE";
    }
}