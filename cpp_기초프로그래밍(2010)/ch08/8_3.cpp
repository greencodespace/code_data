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
 	void setReal(int  r);	
	void setImage(int i);

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
void Complex::setReal(int r)
{
	real = r;
}
 void Complex::setImage(int i)
{
	image = i;
}

void main( )
{
	Complex  x;
	x.setReal( 5 );  
    x.setImage( 10 );   
 	x.show( );
}
