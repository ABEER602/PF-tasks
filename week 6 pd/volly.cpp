#include<iostream>
using namespace std;
float play_time(float weekend , float holidays , string year);
main()
{
    float weekend ;
    float holidays;
    int result;
    string year;
    cout << "ENTER YEAR (leap or normal year):";
    cin >> year;
    cout << "ENTER HOLIDAYS EXCEPT WEEKENDS:";
    cin >> holidays;
    cout << "ENTER NUMBER OF WEEKENEDS WHICH HE SPEND IN HOMETOWN:";
    cin >> weekend;
    result = play_time(weekend ,holidays ,year);
    cout << "THE TOTAL TIME TO PLAY VOLLYBALL IS " << result;
}
float play_time(float weekend , float holidays , string year)
{
float playTime , working_weekend;
float play_during_holiday;
if (year == "normal")
{
 play_during_holiday = (holidays * 2) / 3 ;
 working_weekend = ((48 - weekend)* 3 / 4);
 playTime = play_during_holiday + working_weekend + weekend;
}
if (year == "leap")
{
  play_during_holiday = (holidays * 2) / 3 ;
 working_weekend = ((48 - weekend)* 3 / 4);
 playTime = play_during_holiday + working_weekend + weekend;   
 playTime = playTime + (playTime * 0.15);

}
return playTime;
}