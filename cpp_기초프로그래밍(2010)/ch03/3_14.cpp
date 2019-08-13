 #include <iostream>
 using namespace std;
 void main()
 {
   int total=0;
   int i=1;     //초기식을 for문 밖으로
   for( ;i<=3; ) { //조건식만
      total+=i;
      i++; //증감식을 문장으로
   }
   cout<<"1-3까지의 합은 "<<total<<"\n";

 }
