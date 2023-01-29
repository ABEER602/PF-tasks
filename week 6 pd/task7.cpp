#include <iostream>
using namespace std;
main()
     {
        int examHr, examMin , StdHr, StdMin, hr, min,hh,mm,hhh;
        float examstart , arrival_time;
    
        cout << "exam starting hour (0 - 23):";
        cin >> examHr;
        cout << "exam starting minute(0-59):";
        cin >> examMin;
        cout << "student arrival hour(0-23) :";
        cin >> StdHr;
        cout << "student arrival minute (0-59):";
        cin >> StdMin;
        examstart = (examHr * 60) + examMin;
        arrival_time = (StdHr * 60) + StdMin;
        if (arrival_time==examstart) // on time
        {
       

            cout << "ON TIME" << endl;

        }
        else if (arrival_time<examstart)  // early
        {
            mm = examstart-arrival_time;
            if (mm <= 30)
            {
                cout << "ON TIME" << endl;
                cout << mm<<" " << "before the exam start" << endl;
            }
            hh = mm / 60;      // mm = total minutes
            hhh = mm % 60;    // hh = hours
            if (hh==0&&mm>30)      // hhh = min
            {
            
                cout << "EARLY" << endl;
                cout << hhh<<" " << "minutes before the exam start";
            }
            else if(hh!=0&&mm>30)
            {
                cout << "EARLY" << endl;
                cout << hh << ":" << hhh<<" " << "minutes before the exam start";
            }
        }
         else if (arrival_time>examstart)//late
        {
            cout << "LATE" << endl;
            mm = arrival_time - examstart;
            hh = mm / 60;      // mm = total minutes
            hhh = mm % 60;    // hh = hours
            if (hh == 0)      // hhh = min
            {
                
                cout << hhh<<" " << "minutes after the exam start";
            }
            else
            {
               
                cout << hh << ":" << hhh<<" " << "minutes after the exam start";
            }
        }
}