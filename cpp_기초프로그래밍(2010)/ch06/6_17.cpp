#include<iostream>
using namespace std;
#define ROW		3
#define COL		4
void main()
{
	int a[ROW][COL] = {	{90, 85, 95, 100},    	
				{75, 95, 80, 90},	
				{90, 80, 70, 60}	
			     };
	for(int r= 0; r<ROW; r++){
		cout<<"\n#"<< r << "¹øÂ° Çà\n";
		cout<< "\t a["  << r << "] = " << a[r];
		cout<< "\t &a[" << r << "][0] = " << &a[r][0];
	}
	cout<<"\n\n *a[0]="<<*a[0]<<"\t *a[1]="<<*a[1]<<"\t *a[2]="<<*a[2]<<"\n";
}
