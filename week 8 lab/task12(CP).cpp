#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[100];
	cout << "ENTER THE STRING : " << endl;
	cin.get(arr, 100);
	 int length =strlen(arr);
	cout << "THE NAME AFTER ADDITION IS : " << endl;
	for (int i = 0; i<length; i++)
	{
		cout << ++arr[i] ;

	}
	system("pause");
	
}