#include<iostream>
using namespace std; 
void main( )
{
   int x;

   cout << " 정수값을 입력하세요 => ";
   cin >> x;

   if(x % 2 == 1) 
      cout << " 홀수이다. \n";
   else
	  cout << " 짝수이다. \n";
}


