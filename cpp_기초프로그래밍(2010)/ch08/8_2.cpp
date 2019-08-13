#include<iostream>
using namespace std;
class  Complex 
{
private :
	int 	real;		
	int 	image;
public :
	void init( );		
	void show( );
};
void Complex::init( )
{
	real=2;
	image=5;
}
void Complex::show( )
{
	cout<<"( " <<real  <<" + " <<image << "i )" <<endl ;
}

void main( )
{
	Complex  x;
	x.real=5;  
    x.image=10;   
 	x.show( );
}
