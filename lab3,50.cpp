# c-assignment3
// question 50
#include<iostream>
using namespace std;
int main()
{
  int n,x,pr,a,b;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Prime factor of "<<n<<" = ";
  for(a=1;a<=n/2;a++)
   { 
    pr=1;
    x=a;
    if(x==1)
    {
      pr=0;
    }
    else
    for(b=2;b<=x/2;b++)
    {
      if(x%b==0)
      {
        pr=0;
        break;
      }
    }
    if(pr==1)
     if(n%x==0)
      cout<<x<<"  ";
    }
  return 0;
} 
