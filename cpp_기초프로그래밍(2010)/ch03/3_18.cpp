 #include <iostream>
 using namespace std;
 void main()
 {
    int total=0;
    for(int i=1;i<=10;i++) {
       if(i%2==0) // i�� 2�� ������ ��������
          continue;  //for���� ���  
	   total+=i;
    } 
	cout<<"i�� "<< i <<" �϶� for���� ���� ��\n";
	cout<<"total : "<<total<<endl;

 }
