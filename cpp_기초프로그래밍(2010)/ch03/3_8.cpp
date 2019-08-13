 #include <iostream>
 using namespace std;
 void main()
 {
    int total=0;
    for(int i=5;i>=1;i--) {
       cout<<"i ="<<i<<endl;
       total=total+i; 
       cout<<"total ="<<total<<endl;
    }
    cout<<"5부터 1까지의 합계는 "<< total <<"입니다"<<endl;
 }
