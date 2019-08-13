#include<iostream>
using namespace std;
struct namecard{
	 char name[20];
	 char job[30];
	 char tel[20];
	 char email[40];
};

void structPrn(namecard temp);  
namecard structInput( );

void main()
{
   namecard   x={"전원지","디자이너","345-0876","pr@pride.com"},
 	 	      y={"전수빈","의사    ","356-0868","subin@pride.com"};
   namecard  *p;
   p=&x;
  cout<<"\n 이름   직업            연락처           이메일 ";
  cout<<"\n=========================================================";
   cout<<"\n"<<(*p).name<<"\t"<<(*p).job<<"\t"<<(*p).tel<<"\t"<<(*p).email;
  
  p=&y;
   cout<<"\n"<<p->name<<"\t"<<p->job<<"\t"<<p->tel<<"\t"<<p->email;
  cout<<"\n=========================================================";
  
   cout<<"\n\n sizeof(x) => "<<sizeof(x);
   cout<<"\n sizeof(p) => "<<sizeof(p)<<"\n";
}