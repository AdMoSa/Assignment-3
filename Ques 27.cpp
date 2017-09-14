#include<iostream>
using namespace std;
int main()
{
  int n,sum,a;
  a=1;
  sum=0;
  
  cout<<"Enter nth term : ";
  cin>>n;
  
  while(a<=n)
  {
    sum=sum+a;
    a++;
  }
  
  cout<<"The sum of 1 to n : "<<sum;
  
  return 0;
}
