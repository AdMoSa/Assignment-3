#include<iostream>
using namespace std;

int main()
{
 int n,d;
 d=0;
 cout<<"Enter any number : ";
 cin>>n;
 
 int a=n;
 
 while(n!=0)
 {
   n=n/10;
   d++;
 }
 
 cout<<"Number of digits in  "<<a<<" = "<<d;
 
 return 0;
}
