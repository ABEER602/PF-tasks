#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "ENTER ANY WORD:";
    cin >> word;
    int count =0;
    for (int index = 0 ; word[index]!= '\0';index++)
    {
        count ++;
    }
    if (count % 2 == 0)
    {
        cout << "the length is even:";
    }
    else
    {
        cout << "the length is odd:";
    }
}