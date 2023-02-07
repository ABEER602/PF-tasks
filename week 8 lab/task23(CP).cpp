#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    cout << "ENTER LINE YOU WANT TO PRINT";
    getline(cin, line);
    cout << "something" << " " << line;
    return 0;
}