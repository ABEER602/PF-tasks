#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout << "ENTER ANY WORD:";
    cin >> word;
    cout << "ENTER LETTER YOU WANT TO SEE:";
    cin >> letter;
    int index=0;
    int count=0;
     while(word[index]!='\0')
     {
        count++;
        index++;
     }
     index = count-1;
     if (word[index] == letter)
     {
        cout << "same" << endl;
     }
     else
     {
        cout << "not same" << endl;
     }
    
}