
 #include<iostream.h>
 class Base{       
 public:
     Base( );
     ~Base( );
 };
 Base::Base( )
 {
     cout<<" ��� Ŭ������ ������ "<<endl;
 }
 Base::~Base( )
 {
     cout<<" ��� Ŭ������ �Ҹ���"<<endl;
 }
 class derived : public Base{
 public :
     derived( );
     ~derived( );
 };
 derived::derived( )
 {
     cout<<" �Ļ� Ŭ������ ������ "<<endl;
 }
 derived::~derived( )
 {
     cout<<" �Ļ� Ŭ������ �Ҹ��� "<<endl;
 }
 
 void main()
 {
     derived obj;
 }

