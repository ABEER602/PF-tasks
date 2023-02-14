#include <iostream>
using namespace std;
main()
{
    char letter;
    string store;
    int count = 0;
    int index;
    cout << "ENTER HOW MANY WORDS YOU WANT TO ENTER" << endl;
    cin >> index;
    cout << "ENTER LETTER YOU WANT TO FIND" << endl;
    cin >> letter;
    string word[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER WORD";
        cin >> word[i];
    }
    for (int i = 0; i < index; i++)
    {
        store = word[i];
        for (int x = 0; store[x] != '\0'; x++)
        {
            if (letter == store[x])
            {
                count++;
            }
            else
            {
                count;
            }
        }
    }
    cout << count << endl;
}