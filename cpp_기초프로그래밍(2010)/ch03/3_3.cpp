#include<iostream>
using namespace std; 
void main( )
{
    int score;   //�Է¹��� ������ ������ ���� 
    char grade;  //���� ������ ������ ���� 
    cout<<"������ �Է��ϼ��� : ";
    cin>>score;
    //���� üũ
    if(score>=90)            //score�� 90�̻��̳�?
       grade='A';           //�����ϸ� grade='A'
    else if (score>=80)      //�ƴϸ� score�� 80�̻��̳�?
       grade='B';           //�����ϸ� grade='B'  
    else if (score>=70)      //�ƴϸ� score�� 7�̻��̳�?
       grade='C';           //�����ϸ� grade='C'
    else if (score>=60)      //�ƴϸ� score�� 6�̻��̳�?
       grade='D';           //�����ϸ� grade='D'
    else                    //�ƴϸ� 
       grade='F';           //grade='F'
    cout<<"�Է��� ���� " <<score<<" : "<<grade<<"�����Դϴ�.\n";
}

