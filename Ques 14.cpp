#include <iostream>
using namespace std;

int main()
{
    int a,b,c,sum;
    cout << "Enter the angless of the triangle :  ";
    cin >> a >> b >> c;
    sum = a+b+c;
    
    if (sum==180)
    cout << "Triangle is valid.";
    else
    cout << "Triangle is not valid.";
    
    return 0;
}
