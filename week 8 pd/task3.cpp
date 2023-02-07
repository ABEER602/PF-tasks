#include<iostream>
using namespace std;
main()
{
    string word;
    cout << " ENTER ANY WORD:";
    cin >> word;
    int index=0;
    while (word[index]!= '\0')
    {
        index++;
    }
    if (index % 2 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

   
}
