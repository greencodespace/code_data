#include<iostream>
using namespace std; 
void main( )
{
    int score;   //입력받은 점수를 저장할 변수 
    char grade;  //구한 학점을 저장할 변수 
    cout<<"점수를 입력하세요 : ";
    cin>>score;
    //조건 체크
    if(score>=90)            //score가 90이상이냐?
       grade='A';           //만족하면 grade='A'
    else if (score>=80)      //아니면 score가 80이상이냐?
       grade='B';           //만족하면 grade='B'  
    else if (score>=70)      //아니면 score가 7이상이냐?
       grade='C';           //만족하면 grade='C'
    else if (score>=60)      //아니면 score가 6이상이냐?
       grade='D';           //만족하면 grade='D'
    else                    //아니면 
       grade='F';           //grade='F'
    cout<<"입력한 점수 " <<score<<" : "<<grade<<"학점입니다.\n";
}

