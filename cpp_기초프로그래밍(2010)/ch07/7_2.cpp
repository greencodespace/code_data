#include<iostream>
using namespace std;
struct namecard{
	 char name[20];
	 char job[30];
	 char tel[20];
	 char email[40];
};
void main()
{
  namecard  x={ "김주현", "MCSE전문강사", "418-9876","ju.@pride.com"},
	        y={ "박혜경", "웹마스터",     "551-6986","hk.@pride.com"},
	        z={ "김동식", "기획A팀대리",  "318-3961","ds.@pride.com"};

 cout<<"\n 이름   직업            연락처           이메일 ";
 cout<<"\n =====================================================";
 cout<<"\n "<<x.name <<"\t"<< x.job <<"\t"<< x.tel <<"\t"<< x.email;
 cout<<"\n "<<y.name <<"\t"<< y.job <<"\t"<< y.tel <<"\t"<< y.email;
 cout<<"\n "<<z.name <<"\t"<< z.job <<"\t"<< z.tel <<"\t"<< z.email;
 cout<<"\n =====================================================\n";
}
