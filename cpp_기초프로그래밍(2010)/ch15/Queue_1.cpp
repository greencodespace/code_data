 #include <iostream>
 using namespace std;
 #define MAX  4
 #include <iostream>
 using namespace std;
 class Queue{
   int queue[MAX];
   int front;
   int rear;
 public :
   Queue();
   void clear_queue(void);
   bool put(int data);
   bool get(int &data);
 };
 
 Queue::Queue()
 { 
   front = rear = 0;
 }
 
 bool Queue::put(int data)
 {
   if((rear + 1) % MAX == front)  
     return false;
   queue[rear] = data;
   rear = ++rear % MAX;
   return true;
 }
 
 bool Queue::get(int &data)
 {
     if (front == rear)  
       return false;
     data = queue[front];
     front = ++front % MAX;
     return true;
  }
 
 void main(void)
 {
     int data;
     Queue  Obj;
 
     cout<<"Put :  A  B"<<endl;
     Obj.put('A'); 
     Obj.put('B'); 
     
     cout<<"\nGet :  ";
     Obj.get(data);
     cout<< (char)data <<endl;
 
     cout<<"\nPut :  C  D"<<endl;
     Obj.put('C'); 
     Obj.put('D');
     
     cout<<"\nGet :  ";
     while(Obj.get(data))
       cout<< (char)data <<"   ";
     cout<<"\n\n";
 }
