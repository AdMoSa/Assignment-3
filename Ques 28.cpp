#include<iostream>
using namespace std;

int main()
{
  int n,a,sum;
  a=1;
  sum=0;
  
  cout<<"Enter the nth term : ";
  cin>>n;
  
  while(a<=n)
  {
    if (a%2==0)
    {
      sum=sum+a;
    }
    a++;
  }
  
  cout<<"The sum of even numbers upto n : "<<sum;
  
  return 0;
}
