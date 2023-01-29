#include <iostream>
using namespace std;
main()
{
    string temperature;
    string humidity;
    cout << "enter temperature (warm or cold):";
    cin >> temperature;
    cout << "enter humidity (dry or humid):";
    cin >> humidity;
    if (temperature == "warm" && humidity == "dry")
    {
        cout << " play tennis";
    }
      if (temperature == "warm" && humidity == "humid")
    {
        cout << " swim ";
    }
      if (temperature == "cold" && humidity == "dry")
    {
        cout << " play basketball";
    }
      if (temperature == "cold" && humidity == "humid")
    {
        cout << " watch TV";
    }
}
