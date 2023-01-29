#include<iostream>
using namespace std;
main()
{

    int h, x_axis, y_axis;
    cout << "enter   the height: " << endl;
    cin >> h;

    cout << "enter x cordinate: " << endl;
    cin >> x_axis;

    cout << "enter y cordinate: " << endl;
    cin >> y_axis;
     if ((x_axis > 0  && x_axis < 3 * h )&& (y_axis < h && y_axis > 0))
    {
        cout << "inside" << endl;
    }
    else if ((x_axis > h && x_axis < 2*h ) && (y_axis > h && y_axis < 4 * h))
    {
        cout << "inside" << endl;
    }
    else if ( (y_axis >=0 && y_axis <=h) && (x_axis >=0 && x_axis <= 3 * h) )
    {
        cout << "boundary" << endl;
    }
    else  if ((x_axis >=h && x_axis <= 2*h) && (y_axis >=h && y_axis <= 4 * h))
    {
        cout << "boundary" << endl;
    }
    
     else  
    {
        cout << "outside" << endl;
    }
    
    
}
   