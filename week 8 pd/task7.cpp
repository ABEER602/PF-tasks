#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    cout << "ENTER WORD YOU WANT TO COMPARE" << endl;
    cin >> word1;
    cout << "ENTER WORD YOU WANT TO COMPARE WITH" << endl;
    cin >> word2;
    int count = 0;
    for (int size1 = 0 ; word1[size1] != '\0'; size1++)
    {
        for (int size2 = 0; word2[size2] != '\0'; size2++)
        {
             if (word1[size1] == word2[size2])
            {
                count++;
                word2[size2] = ' ';
                break;
            }
        }
    }
    cout << "THERE ARE " << count << " COMMON CHARACTERS IN THE STRING " << endl;
}