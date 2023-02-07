#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "ENTER ANY WORD:";
    cin >> word;
    int count=0;
    for (int index = 0 ; word[index]!= '\0';index++)
    {
     if (word[index]=='a'|| word[index]== 'e'||  word[index]== 'i'||  word[index]== 'o'||  word[index]== 'u')
       {
        count++;
       }
    }
    cout << count << endl;
}