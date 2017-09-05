#include <iostream>
using namespace std;

main()
{
 int a;
 cout << "Enter your number: ";
 cin >> a;
 if(a%55==0)
    cout << "The number is divisible by 5 and 11";
 else
    cout << "The number is not divisible by 5 and 11";
} 
