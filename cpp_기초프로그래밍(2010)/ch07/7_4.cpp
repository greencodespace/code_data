#include<iostream>
using namespace std;
struct namecard{
	 char name[20];
	 char job[30];
	 char tel[20];
	 char email[40];
};
void structPrn(namecard temp);  
void main()
{
 namecard  x={ "������", "MCSE��������", "418-9876",  "ju.@pride.com"},
	 	   y={ "������", "��������",   	 "551-6986",  "hk.@pride.com"},
		   z={ "�赿��", "��ȹA���븮",  "318-3961",  "ds.@pride.com"};

 cout<<"\n �̸�   ����            ����ó           �̸��� ";
 cout<<"\n=====================================================";
 structPrn(x);	//�Լ��� ȣ��
 structPrn(y);
 structPrn(z);
 cout<<"\n ====================================================\n";
}

void structPrn(namecard temp)     //�Լ��� ����
{
  cout<<"\n"<<temp.name<<"\t"<<temp.job<<"\t"<<temp.tel<<"\t"<<temp.email;
}

