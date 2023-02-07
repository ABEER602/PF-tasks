#include<iostream>
using namespace std;
main()
{
    string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    string name;
    int ticket;
    cout << "NAME OF MOVIE YOU WANT TO SEE:" << " ";
    cin >> name;
    cout << "HOW MANY TICKETS YOU WANT TO BUY" << " ";
    cin >> ticket;
    int found = -1;
    for (int index = 0 ; index < 5 ;index++)
    {
        if (movie[index]==name)
        {
            found = index;
        }
    }
    if (found != -1)
    {
        int discount;
        int price  = (500 * ticket);
        int total_price;
        if(found % 2 == 0)
        {
        discount = ((500 * ticket) * 10 ) / 100;
        total_price = price - discount;
        cout << "your price is" << " " << total_price  ;
        }
        if(found % 2 != 0)
        {
        discount = ((500 * ticket) * 5 ) / 100;
        total_price = price - discount;
        cout << "your price is" << " " << total_price;
        }

    }
    else
    {
        cout << "NOT AVAILABLE";
    }
} 