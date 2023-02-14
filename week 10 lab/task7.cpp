#include<iostream>
using namespace std;
main()
{
    int index;
    cout << "ENTER HOW MANY WORDS YOU WANT TO ENTER" << endl;
    cin >> index;
    string word[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER WORD";
        cin >> word[i];
    }
     for (int i = index - 1 ; i >= 0; i--)
    {
          cout << word[i];
    }
}