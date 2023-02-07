#include<iostream> 
using namespace std;
main()
{
    string arr;
    cout << "ENTER ANY SENTENCE YOU WANT TO PRINT:";
    getline(cin,arr);
    for(int index = 0; arr[index] !='\0'; index++)
    {
        if (arr[index] == 'a' || arr[index] == 'e' || arr[index] == 'i' || arr[index] == 'o' || arr[index] == 'u' || arr[index] == 'A' || arr[index] == 'E' || arr[index] == 'I' || arr[index] == 'O' || arr[index] == 'U')
        {
            continue;
        }
        cout << arr[index];
    }
}
