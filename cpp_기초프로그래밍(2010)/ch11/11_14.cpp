#include<iostream>
using namespace  std;
class Shape   
{
protected :
   double area;
public:
   virtual void  Draw( )=0;   
   virtual double GetSize( )=0;   
};

class Rect : public Shape{
protected :
  int width;
  int height;
public :
   Rect(int w=0, int h=0);
   void Draw();
   double GetSize( );
};

Rect::Rect(int w, int h)
{
   width=w;
   height=h;
}

void Rect::Draw( )
{
   cout<<"사각형을 그린다"<<endl;
}

double Rect::GetSize( )
{
   area=width*height;
   return area;
}

class Circle : public Shape{
protected :
  int radius;
public :
   Circle(int r=0);
   void  Draw();
   double GetSize( );
};

Circle::Circle(int r)
{
   radius=r;
}
void Circle::Draw( ) 
{
   cout<<"원을 그린다"<<endl;
}

double Circle::GetSize( )
{
   area=radius*radius*3.14;
   return area;
}

void CommonPrn(Shape *ptr)
{
	ptr->Draw();
}
void main( )
{
	//Shape obj;

    CommonPrn(new Rect);
	CommonPrn(new Circle);
}