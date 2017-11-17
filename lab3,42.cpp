# c-assignment3
//question 42
#include<iostream>
using namespace std;
int main()
{
 int x,n,p;
 int pro=1;
 cout<<"Enter a number : ";
 cin>>n;
 cout<<"Enter power of number : ";
 cin>>p;
 for(x=0;x<p;x++)
 {
   pro=pro*n;
 }
 cout<<pro;
 return 0;
}
