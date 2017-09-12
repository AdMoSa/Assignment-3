#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the sides of the triangle :  ";
    cin >> a >> b >> c;
    
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    cout << "Triangle is valid.";
    else
    cout << "Triangle is not valid.";
    return 0;
}
