#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "ENTER ANY WORD:";
    getline(cin , word);
    int count =0;
    for (int index = 0 ; word[index]!= '\0';index++)
    {
        count ++;
    }
    int index=count;
    while (index > -1)
    {
        cout << word[index] << endl;
        index--;
    }

   
}