#include<iostream>
using namespace std;
struct namecard{
	 char name[20];
	 char job[30];
	 char tel[20];
	 char email[40];
};

void structPrn(namecard temp);  
void structInput(namecard &temp);

void main()
{
  namecard  x[3]={ {"김주현", "MCSE전문강사", "418-9876", "ju.@pride.com"},
  { "박혜경", "웹마스터",    "551-6986", "hk.@pride.com"},
 		  	{ "김동식", "기획A팀대리", "318-3961", "ds.@pride.com"}
 			};
   cout<<"\n 이름   직업            연락처           이메일 ";
   cout<<"\n=========================================================";
   for(int i = 0 ; i < 3; i++)
 	  cout<<"\n"<<x[i].name<<"\t"<<x[i].job<<"\t"<<x[i].tel<<"\t"<<x[i].email;
   cout<<"\n==========================================================\n";
}
