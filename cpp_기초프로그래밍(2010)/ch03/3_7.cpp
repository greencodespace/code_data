#include <iostream>
 using namespace std;
 void  main()
 {
    int total=0;    //�ݵ�� �ʱ�ȭ �ؾ� �Ѵ�.
    for(int i=1;i<=5;i++)  {    
       cout<<"i = "<<i<<endl;
       total+=i;	 // total=total+i;
       cout<<"total = "<<total<<endl;
    }
    cout<<"1���� " << i-1 <<" ������ �հ�� "<< total <<"�Դϴ�"<<endl;
 }