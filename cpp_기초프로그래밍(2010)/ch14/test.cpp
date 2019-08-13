#include <fstream>
#include <iostream>
using namespace std;

 void main()
 {
   ifstream   fin;  
   ofstream  fout; 	

   char  ch;  

   fin.open("14_9.cpp");
   fout.open("dest.cpp"); 

   if(fin.fail( ) || fout.fail( )){    
     printf("Error: file open error\n");
     return;
   }

  while(fin.get(ch))   
     fout.put(ch);   
 
   fin.close();
   fout.close();
 }
