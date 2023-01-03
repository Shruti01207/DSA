# include<iostream>
using namespace std;
const int N=5;
int queue[N];// arr of size 5
int front=-1,rear=-1;// front=pointing to data which is most recently operated
// rear=pointing to data which most recent added data
// If both front & rear is equal to -1, it indicates that queue is empty
void Display( );
void Dequeue(   );
void Enqueue(int data);
bool isQFull(     );
int main(  ){

Enqueue(4);
Enqueue(5);
Enqueue(6);
Enqueue(7);
Enqueue(8);
Display( );
Dequeue( );
Dequeue( );
Display( );
Dequeue( );
Dequeue( );
Display( );




}
// Enqueue( )=To insert data in the  queue
//----------------------------
//   1 f=-1,r=-1
//-----------------------------
void Enqueue(int data){// To insert data
  // When q is full u cannot insert data  
  if(front==-1){
    rear=front=0;// If q is empty ,we should update both front & rear
  }
  else{
    ++rear;
  }
  queue[rear]=data;
}
//----------------------------
//    1--
//-----------------------------
void Dequeue(    ){
 // special case when only 1 element is rem.
 if(front==-1 && rear ==-1){
    cout<<"UnderFlow\n";
 }
 else if(front==rear){
    front=rear=-1;
 }
 else{
    cout<<"Dequeued data="<<queue[front]<<endl;
    ++front;// Always data is deleted from the front end i.e. only use the front ptr
 }
}

bool isQFull(     ){
if(rear==N-1)
 return true;

  return false;
}
void Display( ){
if(front==-1 && rear==-1)// if q is empty,what u will display?
cout<<"Queue is empty\n";

for(int i=front;i<=rear;++i){
    cout<<queue[i]<<" ";
}
cout<<endl;
}