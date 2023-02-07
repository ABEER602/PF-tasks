#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool found;
    cout << "ENTER ANY WORD:";
    cin >> word;
    cout << "ENTER LETTER YOU WANT TO SEE:";
    cin >> letter;
    int i=0;
    while(word[i] != '\0')
    {
        if (letter == word[i])
        {
         found= true;
        }
        i++;
        if (found == true)
    {
        cout << letter << " exists in the " << word << endl;
    }
      if (found == false)
    {
       cout << letter << " does not exists in the " << word << endl; 
    }
    }
      
}