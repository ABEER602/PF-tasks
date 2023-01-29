#include <iostream>
using namespace std;
double myFunc(double length , double width , double height , string output);
main()
{
double length ;
double width ;
double height;
string output;
double result;
cout << " enter length :";
cin >> length;
cout << " enter width :";
cin >> width;
cout << " enter height:";
cin >> height;
cout << " enter output :";
cin >> output;
result =  myFunc( length ,  width ,height , output);
cout << result;
}
double myFunc(double length , double width , double height , string output)
{
double volume;
volume = (length * width * height) / 3 ;
if (output == "cm")
{
volume = volume *( 100);
cout << "your volume is : " << volume;
}
if (output == "m")
{
cout << "your volume is : " << volume;
}

if (output == "km")
{
volume = volume / (1000);
cout << "your volume is : " << volume;
 }
if (output == "mm")
{
volume = volume * (1000);
cout << "your volume is : " << volume;
}
return volume;
}





