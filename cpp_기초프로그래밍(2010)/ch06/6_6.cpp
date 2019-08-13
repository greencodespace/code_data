#include<iostream.h>  
#define ROW		3 
#define COL		5 
void main() 
{ 
	int   a[ROW][COL] = {0, };
	int r, c;

	for(r= 0; r<ROW; r++){
	    a[r][0] =r+1;
	    cout<<"# "<< a[r][0] <<" 번째 학생의 점수를 입력하세요\n";
		for(c= 1; c <= COL-2; c++) {
			cout<<c << "번째 과목 => " ;
			cin>>a[r][c];
		 }
	}

	for(r= 0; r<ROW; r++){	
		for(c=1; c<=COL-2; c++) {
		       a[r][COL-1] += a[r][c];
		 }
	}
	cout<<"\n\n        **   출 력  결 과   **";
	cout<<"\n--------------------------------------";
	cout<< "\n  번호  국어   영어   수학   총점";
	cout<<"\n--------------------------------------\n";
	for(r= 0; r<ROW; r++){
		for(c= 0; c<COL; c++)	
			cout<<"   "<<a[r][c];  	
		 cout<<"\n";
	}
}
