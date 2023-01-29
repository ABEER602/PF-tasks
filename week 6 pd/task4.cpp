#include <iostream>
using namespace std;
float Myfunc (string fruit , string day , float quantity);
main()
{
    string fruit;
    string day;
    float quantity;
    float result;
    cout << "enter fruit name:";
    cin >> fruit;
    cout << "enter the day you buy fruits:"<< endl;
    cin >> day;
    cout << "enter quantity of fruits:";
    cin >> quantity;
     result = Myfunc (fruit , day , quantity);
     cout << result;
}
float Myfunc (string fruit , string day , float quantity)

{
       float price;
       if (fruit == "banana" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 2.70;
       }
       else if (fruit == "apple" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 1.25;
       }
       else if (fruit == "orange" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 0.90;
       }
        else if (fruit == "grapefruit" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 1.60;
       }
        else if (fruit == "kiwi" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 3.00;
       }
        else if (fruit == "pineapple" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 5.60;
       }
        else if (fruit == "grapes" && (day == "Sunday" || day == "Saturday"))
       {
        price = quantity * 4.20;
       }
       if (fruit == "banana" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 2.50;
       }
       else if (fruit == "apple" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 1.20;
       }
       else if (fruit == "orange" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 0.85;
       }
       else if (fruit == "grapefruit" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 1.45;
       }
       else if (fruit == "kiwi" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 2.70;
       }
       else if (fruit == "pineapple" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 5.50;
       }
       else if (fruit == "grapes" && (day == "Monday" || day == "Tuesday" || day =="Wednesday" || day == "Thursday" || day == "Friday"))
       {
        price = quantity * 3.85;
       }
       return price;
       
    

    

}