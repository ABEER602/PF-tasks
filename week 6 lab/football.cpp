#include<iostream>
using namespace std;
void football(float budget, string category, int members);
int main()
{
    float budget;
    string category;
    int members;

    cout << "enter your budget :" << endl;
    cin >> budget;
    cout << "enter your category :" << endl;
    cin >> category;
    cout << "enter your group members:" << endl;
    cin >> members;
    football(budget, category, members);

    system("pause");

}
void football(float budget, string category, int members)
{
    float budget_per;
    float money_req;
    float money_left;

    if (members >= 1 && members <= 4)
    {
        budget_per = budget - (budget * 0.75);
        if (category == "vip")
        {
            money_req = members * 499.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }

        }


        if (category == "normal")
        {
            money_req = members * 249.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }
        }


    }
    if (members >= 5 && members <= 9)
    {
        budget_per = budget - (budget * 0.60);
        if (category == "vip")
        {
            money_req = members * 499.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }

        }


        if (category == "normal")
        {
            money_req = members * 249.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }
        }


    }
    if (members >= 10 && members <= 24)
    {
        budget_per = budget - (budget * 0.50);
        if (category == "vip")
        {
            money_req = members * 499.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }

        }


        if (category == "normal")
        {
            money_req = members * 249.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }
        }


    }
    if (members >= 25 && members <= 49)
    {
        budget_per = budget - (budget * 0.40);
        if (category == "vip")
        {
            money_req = members * 499.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }

        }


        if (category == "normal")
        {
            money_req = members * 249.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }
        }


    }
    if (members >= 50)
    {
        budget_per = budget - (budget * 0.25);
        if (category == "vip")
        {
            money_req = members * 499.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }

        }


        if (category == "normal")
        {
            money_req = members * 249.99;
            if (budget_per < money_req)
            {
                money_left = money_req - budget_per;
                cout << "you are insufficient to buy ticket as you are required " << money_left << " " << "more money";

            }

            else
            {
                money_left = budget_per - money_req;
                cout << "you are sufficient to buy ticket as you have " << money_left << " " << "more money";
            }
        }


    }
}