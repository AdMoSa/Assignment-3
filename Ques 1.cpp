#include <iostream>
using namespace std;

main()
{
 float x,y,max;
 cout << "Enter 1st number: ";
 cin >> x;
 cout << "Enter 2nd number: ";
 cin >> y;
 if(x>=y)
    max=x;
 else
    max=y;
 cout << "Maximum is: "<< max;
}

