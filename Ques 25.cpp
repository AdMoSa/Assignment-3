#include<iostream>
using namespace std;

int main()
{
  int x;
  x=1;
  
  while(x<=100)
  {
    if (x%2==0)
      cout << x << "		";
    x++;
  }
  
  return 0;
}
