#include <iostream>
#include <cstring>
 using namespace std; 
void main()
{
	char flowers1[5] = {'r','o','s','e','\0'};
	char flowers2[6] = "lilac";
	char flowers3[]  = "tulip";

	cout << flowers1 <<"\n";
	cout << flowers2 <<"\n";
	cout << flowers3 <<"\n";

	cout << strlen(flowers1) <<"\n"; //문자열의 길이
	cout << sizeof(flowers3) <<"\n"; //배열의 크기
}
