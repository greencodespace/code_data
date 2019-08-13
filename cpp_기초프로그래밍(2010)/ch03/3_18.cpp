 #include <iostream>
 using namespace std;
 void main()
 {
    int total=0;
    for(int i=1;i<=10;i++) {
       if(i%2==0) // i가 2로 나누어 떨어지면
          continue;  //for문을 벗어남  
	   total+=i;
    } 
	cout<<"i가 "<< i <<" 일때 for문을 벗어 남\n";
	cout<<"total : "<<total<<endl;

 }
