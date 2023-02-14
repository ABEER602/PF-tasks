#include <iostream>
using namespace std;
bool checkIndex(int index);
int miles[10];
main()
{
    int index;
    cout << "MENTION HOW MANY MILES YOU WANT TO ENTER" << endl;
    cin >> index;
    int count = 0;
    int miles[index];
    for (int i = 0; i < index; i++)
    {
        cout << "ENTER NUMBER OF MILES" << endl;
        cin >> miles[i];
    }
    for (int i = 0; i < index - 1; i++)
    {
      bool result = checkIndex(i);
        if (result == true)
        {
            count++;
        }
        else
        {
            count;
        }
    }
    cout << count << endl;
}
bool checkIndex(int index)
{
        if ( miles[index] < miles[index + 1])
        {
            return true;
        }
        else
        {
            return false;
        }
}
