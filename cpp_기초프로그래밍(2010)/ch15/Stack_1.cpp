#include <iostream>
using namespace std;
#define MAX 10
class Stack{
  double item[MAX];    
  int top;                
public :
  Stack( );
  bool Push(double);     
  bool Pop(double &);   
};

//������ ����
Stack::Stack( ) 
{
  	top = -1;   //���ʷ� Push ������ �Ͼ�� 0��°�� �׸��� �����ϱ� ���ؼ�  
}

//�����͸� ���ÿ� �����ϱ� ���� Push �Լ� ����
bool Stack::Push(double data)	
{
    if(top >= MAX-1){       
       return false;
    }
    else{
       ++top;             
       item[top]=data;     
       return true;
    }
}

//�����͸� ���ÿ� �������� ���� Pop �Լ� ����
bool Stack::Pop(double &data)
{
    if(top < 0 ){         
      return false;
    }
    else{
      data = item[top];    
      top--;              
      return true;
    }
}	
void main( )
{
  Stack stkObj; //���� Ŭ������ ��ü ����
  double data;

  //4���� �����͸� ����
  stkObj.Push(10);
  stkObj.Push(20);
  stkObj.Push(30);
  stkObj.Push(40);

   cout<<"\n���ÿ� ����� ������ ������ ==>  ";
   while(stkObj.Pop(data))
     cout<< data <<"   ";
   cout<<"\n";
}

