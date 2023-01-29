 #include <iostream>
using namespace std;
bool Number(int num1, int num2, int num3);
main()
{
    int number1, num2, num3, result;
    cout << "Enter 1st number ";
    cin >> num1;
    cout << "Enter 2nd number ";
    cin >> num2;
    cout << "Enter 3rd number ";
    cin >> num3;
    result = Number(num1, num2, num3);
    if (result == 1)
    {
        cout << "Yes";
   }
    else
        cout << "No";
}
bool Number(int num1, int num2, int num3)
{
    if (num1 == num2 && num2 == num3 && num3 == num1)
    {
        return true;
    }
    else
    {
        return false;
    }
}