 #include <iostream>
 #include <fstream>
 using namespace std; 

 void main(int argc, char *argv[] )
 {
 	char ch;

 	if(argc != 2) {
 		cout<<"��ɾ� �Է��� �� �����̸��� �ݵ�� �Է��ϼ���"<<endl;
 		exit(0);
 	}
 
 	ifstream fin;
 	fin.open(argv[1]);
 
 	if(!fin){
		cout<<"���� ������ �����߽��ϴ�."<<endl;
 		exit(0);
 	}
 	while(fin.get(ch))
 	{
 	   cout<<ch;
 	}
 	fin.close( );
 }
