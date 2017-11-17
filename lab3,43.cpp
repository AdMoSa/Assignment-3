# c-assignment3
//question 43
#include<iostream>
using namespace std;
int main()
{
 int x,n;
 cout<<"Enter a number : ";
 cin>>n;
 cout<<"Factors of "<<n<<"=";
 for(x=1;x<=n;x++)
 {
   if(n%x==0)
   {
    cout<<x<<" ";
   }
  }
 return 0;
}
