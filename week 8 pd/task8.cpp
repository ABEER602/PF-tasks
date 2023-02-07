#include <iostream>
using namespace std;
main()
{
    int index;
    cout << "ENTER HOW MANY COLORS YOU ARE USING" << endl;
    cin >> index;
    int count = 0;
    int result;
    string word[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER COLORS YOU HAVE USED" << endl;
        cin >> word[i];
    }
    for (int i = 0; i < index - 1; i++)
    {
       if (word[i] != word[i + 1])
       {
        count++;
       }
    }
    result = (index * 2) + count ;
    cout << result;
}