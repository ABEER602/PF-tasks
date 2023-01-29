#include <iostream>
using namespace std;
void checkCost(string city , string product, int quantity);
main()
{
    string city;
    string product;
    int quantity;
    cout << "enter name of city :";
    cin >> city;
    cout << "enter name of products :";
    cin >> product;
    cout <<"enter quantity of product :";
    cin >> quantity;
     checkCost(city,product,quantity);
}
void checkCost(string city , string product, int quantity)
{
    float price;
    if (city == "sofia" && product == "coffee")
    {
        price = quantity*0.50;
        cout << price << "is the price for your order";
    }
    else if (city == "sofia" && product == "water")
    {
        price = quantity * 0.80;
        cout << price << "is the price for your order";
    }
    else if (city == "sofia" && product == "beer")
    {
        price = quantity * 1.20;
        cout << price << "is the price for your order";
    }
    else if (city == "sofia" && product == "sweets")
    {
        price = quantity * 1.45;
        cout << price << "is the price for your order";
    }
    else if (city == "sofia" && product == "peanuts")
    {
        price = quantity * 1.60;
        cout << price << "is the price for your order";
    }
     else if (city == "piovdiv" && product == "coffee")
    {
        price = quantity * 0.40 ;
        cout << price << "is the price for your order";
    }
     else if (city == "piovdiv" && product == "water")
    {
        price = quantity * 0.70 ;
        cout << price << "is the price for your order";
    }
     else if (city == "piovdiv" && product == "beer")
    {
        price = quantity * 1.15 ;
        cout << price << "is the price for your order";
    }
     else if (city == "piovdiv" && product == "sweets")
    {
        price = quantity * 1.30 ;
        cout << price << "is the price for your order";
    }
     else if (city == "piovdiv" && product == "peanuts")
    {
        price = quantity * 1.50 ;
        cout << price << "is the price for your order";
    }
     else if (city == "varna" && product == "coffee")
    {
        price = quantity * 0.45 ;
        cout << price << "is the price for your order";
    }
     else if (city == "varna" && product == "water")
    {
        price = quantity * 0.70 ;
        cout << price << "is the price for your order";
    }
    else if (city == "varna" && product == "beer")
    {
        price = quantity * 1.15 ;
        cout << price << "is the price for your order";
    }
    else if (city == "varna" && product == "sweets")
    {
        price = quantity * 1.35 ;
        cout << price << "is the price for your order";
    }
    else if  (city == "varna" && product == "peanuts")
    {
        price = quantity * 1.55 ;
        cout << price << "is the price for your order";
    }
}   
