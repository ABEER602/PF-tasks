#include <iostream>
using namespace std;
main()
{
int price;
string brand;
cout << " enter price of suit ";
cin >> price;
cout << " enter brand name ";
cin >> brand;
if (price <= 1500 && brand == "breakout")
{
cout << "buy the dress" << endl;
}
}