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
        cout << word[index] << " = " << index  << " ";
        index++;
    }

   
}