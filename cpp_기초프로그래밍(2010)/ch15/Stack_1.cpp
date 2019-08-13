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

//생성자 구현
Stack::Stack( ) 
{
  	top = -1;   //최초로 Push 동작이 일어나면 0번째에 항목을 저장하기 위해서  
}

//데이터를 스택에 저장하기 위한 Push 함수 구현
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

//데이터를 스택에 꺼내오기 위한 Pop 함수 구현
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
  Stack stkObj; //스택 클래스로 객체 선언
  double data;

  //4개의 데이터를 삽입
  stkObj.Push(10);
  stkObj.Push(20);
  stkObj.Push(30);
  stkObj.Push(40);

   cout<<"\n스택에 저장된 데이터 꺼내옴 ==>  ";
   while(stkObj.Pop(data))
     cout<< data <<"   ";
   cout<<"\n";
}

