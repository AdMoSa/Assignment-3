#include <iostream>
using namespace std;

int main()
{
 int a,b,c,d,e,f,g,h,i,j;
 cout << "Enter the amount in rupees: ";
 cin >> a;
 b=a/2000; //no of notes in denomination of 2000.
 c=(a%2000)/500; //no of notes in denomination of 500.
 d=((a%2000)%500)/100; //no of notes in denomination of 100.
 e=(((a%2000)%500)%100)/50; // no of notes in denomination of 50.
 f=((((a%2000)%500)%100)%50)/20; //no of notes in denomination of 20.
 g=(((((a%2000)%500)%100)%50)%20)/10; //no of notes in denomination of 10.
 h=((((((a%2000)%500)%100)%50)%20)%10)/5; //no of notes in denomination of 5.
 i=(((((((a%2000)%500)%100)%50)%20)%10)%5)/2; // no of notes in denomination of 2.
 j=(((((((a%2000)%500)%100)%50)%20)%10)%5)%2; // no of notes in denomination of 1.

 cout << "No of notes for the given amount: "<< b+c+d+e+f+g+h+i+j;
 return 0;
}
