 #include <iostream>
  #include <iomanip>
 using namespace std; 

 void main()
 {
   float a=123456.789123;
   double b=123456.789123; 
    
   //실수를 소수점 형태로 출력하겠다는 의미
   cout<<setiosflags(ios::fixed);           
   cout<<a<<endl;
   cout<<b<<endl;
 }      
                     

