  #include<iostream.h>
  #include<string>
  
  class MyString
  {
  private :
    int  m_nLen;
    char *m_pStr;
  public :
    MyString();
    MyString(const char * const str);
    ~MyString();
    friend ostream & operator << (ostream & os, MyString & temp);
  
    MyString(const MyString& str);  
  
    MyString& operator=(const MyString &temp);  
  };
  
  MyString& MyString::operator=(const MyString &temp)  
  {
     if(this == &temp)        
       return *this;           
  
     delete [] m_pStr;             
     m_nLen = temp.m_nLen;       
     m_pStr = new char[m_nLen];  
     strcpy(m_pStr, temp.m_pStr);  
     return *this;                
  }
 //15_4.cpp의 내용과 중복되므로 생략
  void main()
  {
     MyString strA("Apple");
     MyString strB("Banana");
  
      cout << "strA=> "<< strA << endl;
      cout << "strB=> "<< strB << endl; 
    
      MyString strC(strA);
      cout << "strC=> "<< strC << endl; 
  
      strB=strA;
      cout << "strB=> "<< strB << endl; 
  
      //strA="Apple";
      //strB="Banana";
      //strC=strA+strB;
      //cout << "strA=> "<< strA << endl;
      //cout << "strB=> "<< strB << endl; 
      //cout << "strC=> "<< strC << endl;   
  }
