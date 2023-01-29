#include <iostream>
using namespace std;
int game(int weekend,int holiday,string year);
main()
{
    int weekend;
    int holiday;
    string year;
    int result;
    cout << "enter year (normal year or leap year):" << endl;
    cin >> year;
    cout << "enter total holidays except weekends:" << endl;
    cin >> holiday;
    cout << "enter the weekends which were spent in hometown:"<< endl;
    cin >> weekend;
    result = game(weekend, holiday,year);
    cout << result << "is the total time spend in playing vollyball.";        
}
int game(int weekend,int holiday,string year)
{
   int work_weekends;
   int Time_for_game;
   int game_in_holidays;
   if (year == "normal")
   {
    game_in_holidays =(holiday*2)/3;
    work_weekends = ((48 - weekend)*3/4);
    Time_for_game= game_in_holidays + work_weekends+ weekend;
  }
  if (year == "leap")
  {
    game_in_holidays =(holiday*2)/3;
    work_weekends = ((48 - weekend)*3/4);
    Time_for_game= game_in_holidays + work_weekends+ weekend;
    Time_for_game = Time_for_game + (Time_for_game *0.15);
  }
  return Time_for_game;
}