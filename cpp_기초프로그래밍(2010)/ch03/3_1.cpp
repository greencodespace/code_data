#include<iostream>
using namespace std; 
void main( )
{
   int x;

   cout << " 정수값을 입력하세요 ? => ";
   cin >> x;

   if(x < 0) 
	   x = -x;

   cout << " 절대값 => " << x << "\n";
}



