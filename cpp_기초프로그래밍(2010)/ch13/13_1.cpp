#include <iostream>
using namespace std;
int abs(int num)   
{
  if(num<0)
    num=-num;
  return num;
}

double abs(double num)    
{
  if(num<0)
    num=-num;
  return num;
}

long int abs(long int num)    
{
  if(num<0)
    num=-num;
  return num;
}

void main( )
{
  int a=-10;
  cout << a <<"의 절대값은 -> "<< abs(a) << endl; 

  double b=-3.4;  
  cout << b <<"의 절대값은-> "<< abs(b) << endl;
 
  long int c=-20L;
  cout << c <<"의 절대값은 -> "<< abs(c) << endl;
}
