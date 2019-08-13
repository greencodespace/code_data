#include<iostream.h>
void main()
 {
	int a[5] = {10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
		cout<<" a+i   => "<<a+i     <<"    &a[i]=> "<<&a[i]<<"\n";

	for(i=0;i<5;i++)
		cout<<" *(a+i) => "<<*(a + i)<<"    a[i]=> "<<a[i]<<"\n";
}
