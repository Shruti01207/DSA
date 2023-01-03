# include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *prev;
 Node(int data){
    this->data=data;
    this->prev=NULL;
 }
};
int Peek(Node *&top);
void Push(int data,Node *&top);
bool isEmpty(Node *&top );
int Pop(Node *&top);
int main( ){
 Node * top=NULL;
 Push(4,top);
 Push(5,top);
 Push(6,top);
 Push(7,top);
 cout<<Pop(top )<<endl;
 cout<<Peek(top )<<endl;
}
void Push(int data,Node *&top){
    Node * newnode=new Node(data);
    newnode->prev=top;
    top=newnode;
}
bool isEmpty(Node *&top ){
    if(top==NULL)
    return true;
    return false;
}
int Pop(Node *&top){
    if(isEmpty(top)){
        cout<<"Already Empty\n";
        return -1;
    }
   Node * temp=top;
   top=top->prev;
   int val=temp->data;
   free(temp);
  return val;
}

int Peek(Node *&top){
    if(isEmpty(top)){
        cout<<"Empty Container\n";
        return -1;
    }
    return(top->data);
}