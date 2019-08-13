#include<iostream>
using namespace std; 
void main( )
{
  int c=1;
  int d=2;
  float res02;
  res02= c / d;
   cout<<c<<"/"<<d<<"="<<res02<<endl;
  res02 = (float)c / (float)d;
  cout<<c<<"/"<<d<<"="<<res02<<endl;
}