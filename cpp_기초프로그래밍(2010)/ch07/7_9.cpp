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
  namecard  x[3]={ {"������", "MCSE��������", "418-9876", "ju.@pride.com"},
  { "������", "��������",    "551-6986", "hk.@pride.com"},
 		  	{ "�赿��", "��ȹA���븮", "318-3961", "ds.@pride.com"}
 			};
   cout<<"\n �̸�   ����            ����ó           �̸��� ";
   cout<<"\n=========================================================";
   for(int i = 0 ; i < 3; i++)
 	  cout<<"\n"<<x[i].name<<"\t"<<x[i].job<<"\t"<<x[i].tel<<"\t"<<x[i].email;
   cout<<"\n==========================================================\n";
}
