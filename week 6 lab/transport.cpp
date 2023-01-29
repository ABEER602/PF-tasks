#include<iostream>
using namespace std;
void check_price(int dis, char time);

int main()
{
	int dis = 0;
	char time = 0;
	cout << "enter the number of kilometers : " << endl;
	cin >> dis;
	cout << "enter the time (d for day and n for night) :" << endl;
	cin >> time;
	check_price(dis, time);
	system("pause");
}
void check_price(int dis, char time)
{
	float money;
	if (dis>1 && dis < 20)
	{
		if (time == 'd')
		{
			 money = 0.70 + (dis * 0.79);
			cout << money<<" " << "is the cheapest price for day on taxi." << endl;
		}
		else
		{
			money = 0.70 + (dis * 0.90);
			cout << money<<" " << "is the cheapest price for  night on taxi." << endl;

		}
	}
	 else if (dis >= 20&&dis<100)
	 {
		
			money = (dis * 0.09);
			cout << money <<" " << "is the cheapest price on bus." << endl;
	
	
	 }
	 else if (dis >= 100&&dis<=5000)
	 {

		money = (dis * 0.06);
		cout << money<<" " << "is the cheapest price on train." << endl;


	 }
}