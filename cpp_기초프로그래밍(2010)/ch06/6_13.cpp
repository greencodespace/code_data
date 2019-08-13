#include<iostream>
using namespace std;
void prn(int *pa,int size);
void main()
{
	int a[5] = {10,20,30,40,50};
	prn(a, 5); 	
}
void prn(int *pa, int size) 
{
	for(int i = 0;i<size;i++)
		cout<<"   "<<*(pa+i); //pa[i];
	cout<<"\n"; 
}
