#include <iostream>
using namespace std;
void myFunc (string month , int daysToStay);
main()
{   
    string month ;
    int daysToStay;
    float result;
    cout << "enter month when you have to stay in hotel:";
    cin >> month;
    cout << "enter no of days to stay in hotel :";
    cin >> daysToStay;
    myFunc ( month ,  daysToStay);
    
}
void myFunc (string month , int daysToStay)
{
    float charges;
    if  (month == "May" || month == "October")
    {
        charges= daysToStay * 50;
      
        if (daysToStay <= 7)
        {
          charges  ;
         cout << "studio:" << charges << endl; 
        }
        else if (daysToStay > 7 && daysToStay <= 14)
        {
          charges = charges - (charges * 0.05) ;
            cout << "studio:" << charges << endl; 
        }
          else if (daysToStay > 14)
        {
          charges = charges - (charges * 0.30) ;
            cout << "studio:" << charges << endl; 
        }
    }
    if  (month == "June" || month == "September")
    {
        charges= daysToStay * 75.20;
        if (daysToStay <= 14)
        {
          charges ;
         cout << "studio:" << charges << endl; 
        }
          else if (daysToStay > 14)
        {
          charges = charges - (charges * 0.20) ;
          cout << "studio:" << charges << endl; 
        }
    }
    if (month == "July" || month == "August")
    {
        charges= daysToStay * 76;
          cout << "studio:" << charges << endl; 
    }
    if (month == "May" || month == "October")
    {
        charges= daysToStay * 65;
        if (daysToStay <= 14)
        {
          charges ;
            cout << "appartment:" << charges << endl; 
        }
          else if (daysToStay > 14)
        {
          charges = charges - (charges * 0.10) ;
          cout << "appartment:" << charges << endl; 
        }
    }
    if  (month == "June" || month == "September" )
    {
        charges= daysToStay * 68.70;
        if (daysToStay <= 14)
        {
          charges ;
          cout << "appartment:" << charges << endl; 
        }
          else if (daysToStay > 14)
        {
          charges = charges - (charges * 0.10) ;
          cout << "appartment:" << charges << endl; 
        }
    }
    if (month == "July" || month == "August")
    {
        charges= daysToStay * 77;
        if (daysToStay <= 14)
        {
          charges ;
          cout << "appartment:" << charges << endl; 
        }
          else if (daysToStay > 14)
        {
          charges = charges - (charges * 0.10) ;
          cout << "appartment:" << charges << endl; 
        }
    }
    


}
