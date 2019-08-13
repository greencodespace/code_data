 #include <iostream>
 using namespace std;
 void main()
 {
    int total=0;
    int i=1;          //for문의 초기식
    while(i<=10) {     //for문의 조건식
       total+=i;
       i++;     //for문의 증감식
    }
    cout<<"1-10까지의 합은 "<<total<<"\n";
 }
