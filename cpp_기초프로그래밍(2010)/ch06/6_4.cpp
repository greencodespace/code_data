#include<iostream.h>
#define ROW		3
#define COL		4
void main()
{

	int a[ROW][COL] = {	{90, 85, 95, 100}, 
				{75, 95, 80, 90},	
				{90, 80, 70, 60}	
			      };
int r, c;
	cout<<"\n     이중 for문으로 배열을 출력";
	cout<<"\n   ------------------------------\n";

	for(r= 0; r<ROW; r++)	{
	    for(c= 0; c<COL; c++)	
		  cout<<"      "<<a[r][c];  	
	    cout<<"\n";	
	}  
}
