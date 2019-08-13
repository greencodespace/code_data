 #include <iostream>
 #include <fstream>
 using namespace std; 

 void main(int argc, char *argv[] )
 {
 	char ch;

 	if(argc != 2) {
 		cout<<"명령어 입력한 후 파일이름을 반드시 입력하세요"<<endl;
 		exit(0);
 	}
 
 	ifstream fin;
 	fin.open(argv[1]);
 
 	if(!fin){
		cout<<"파일 오픈을 실패했습니다."<<endl;
 		exit(0);
 	}
 	while(fin.get(ch))
 	{
 	   cout<<ch;
 	}
 	fin.close( );
 }
