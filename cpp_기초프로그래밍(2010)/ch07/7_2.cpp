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
  namecard  x={ "������", "MCSE��������", "418-9876","ju.@pride.com"},
	        y={ "������", "��������",     "551-6986","hk.@pride.com"},
	        z={ "�赿��", "��ȹA���븮",  "318-3961","ds.@pride.com"};

 cout<<"\n �̸�   ����            ����ó           �̸��� ";
 cout<<"\n =====================================================";
 cout<<"\n "<<x.name <<"\t"<< x.job <<"\t"<< x.tel <<"\t"<< x.email;
 cout<<"\n "<<y.name <<"\t"<< y.job <<"\t"<< y.tel <<"\t"<< y.email;
 cout<<"\n "<<z.name <<"\t"<< z.job <<"\t"<< z.tel <<"\t"<< z.email;
 cout<<"\n =====================================================\n";
}
