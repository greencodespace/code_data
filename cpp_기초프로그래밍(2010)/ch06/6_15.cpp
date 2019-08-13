01  #include<iostream>
02  using namespace std;
03  void main()
04  {
05     int a=5;
06     int *p;    
07     int **pp;  
08  
09     p=&a;     
10     pp=&p;    
11  
12     cout<<" p   =>"<< p    <<"  &a=>"<< &a << endl;
13     cout<<" *p  =>"<< *p   <<"  a =>"<<  a << endl;
14     cout<<" pp  =>"<< pp   <<"  &p=>"<< &p << endl;
15     cout<<" *pp =>"<< *pp  <<"  p =>"<<  p << endl;
16     cout<<" **pp=>"<< **pp <<"  *p=>"<< *p << endl;
17  }


