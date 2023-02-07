#include<iostream>
using namespace std;
main()
{
    int index;
    cout << "ENTER SIZE OF ARRAY:";
    cin >> index;
    int number[index];
    for(int i =0 ; i< index ; i++)
    {
    cout << "ENTER ANY NUMBER:";
    cin >> number[i];
    }
    for(int i =index-1 ; i>=0 ; i--)
    {
        cout << number[i] << endl;
    }

}