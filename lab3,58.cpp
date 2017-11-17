# c-assignment3
// question 58
#include <iostream>
using namespace std;
int main() 
{  
  int bi,rev=0,di;
  cout<<"Enter a binary number : ";
  cin>>bi;
  while(bi>0)
  {
    di=bi%10;
    rev=(rev*10)+di;
    bi=bi/10;
  }
  while(rev!=0)
  {
     di=rev%10;
     if(di==1)
        cout<<'0';
     else
        cout<<'1';
     rev=rev/10;
        
  }
  

  return 0;
}
