
 #include<iostream.h>
 class Base{       
 public:
     Base( );
     ~Base( );
 };
 Base::Base( )
 {
     cout<<" 기반 클래스의 생성자 "<<endl;
 }
 Base::~Base( )
 {
     cout<<" 기반 클래스의 소멸자"<<endl;
 }
 class derived : public Base{
 public :
     derived( );
     ~derived( );
 };
 derived::derived( )
 {
     cout<<" 파생 클래스의 생성자 "<<endl;
 }
 derived::~derived( )
 {
     cout<<" 파생 클래스의 소멸자 "<<endl;
 }
 
 void main()
 {
     derived obj;
 }

