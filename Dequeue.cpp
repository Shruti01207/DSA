# include<iostream>
using namespace std;
void Enqueue(int data);
void Dequeue(    );
int Peek(  );
void Display(  );
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node * front=NULL,*rear=NULL;
int main( ){
Enqueue(4);
Enqueue(5);
Enqueue(6);
Enqueue(7);
Enqueue(8);
Display( );
Dequeue( );
Dequeue( );
cout<<Peek( )<<endl;
Display( );
Dequeue( );
Dequeue( );
Display( );

}
void Enqueue(int data){
    Node * newnode=new Node(data);
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;//Curr node linked to prev node;
        rear=newnode;
    }
}
void Dequeue(    ){
int data=0;
if(front==NULL && rear==NULL){
    cout<<"Dynamic Queue is empty\n";
    return;
}
Node * temp=NULL;
data=front->data;
if(front==rear){
 temp=front;
 front=rear=NULL;
}
else{
temp=front;
front=front->next;
}
cout<<"Dequeue Data is ="<<data<<endl;
free(temp);// No memory leak
}
int Peek(  ){
   if(front==NULL && rear==NULL){
    cout<<"Dynamic Queue is empty\n";
    return -1;
} 
else{
    return front->data;
}
}
void Display(  ){
    Node * head=front;
    Node *tail=rear;
    while(head!=tail){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data<<endl;
  
}