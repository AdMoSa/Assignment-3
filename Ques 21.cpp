#include<iostream>
using namespace std;

int main()
{
  float u,b,tb,sc;
  cout<<"Enter electricity unit charges : ";
  cin>>u;
  
  if(u<=50)
  {
    b=0.50*u;
    cout<<"Electricity bill : "<<b;
  }
  
  else if (u>50 && u<=150)
  {
    b=25+(u-50)*0.75;
    cout<<"Electricity bill : "<<b;
  }
  
  else if(u>150 && u<=250)
  {
    b=25+75+(u-150)*1.20;
    cout<<"Electricity bill : "<<b;
  }
  
  else
  {
    b=25+74+120+(u-250)*1.50;
    sc=(b*20)/100;
    tb=b+sc;
    cout<<"Electricity bill : "<<tb;
  }
  
  return 0;
}
