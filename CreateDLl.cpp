# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node *prev;
    Node(int data){
        this-> data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    
};
Node * CreateDLl(  );
Node *TogiveTail_PrintDLl(Node *head);
void ReversePrintedLl(Node * tail);
Node * InsertAtBeg(Node *head,int data);
int main( ){
 Node * head=CreateDLl( );
 Node *tail = TogiveTail_PrintDLl(head);
cout<<"Reverse Printed Doubly Linked List\n";
ReversePrintedLl(tail);
Node * newhead=InsertAtBeg(head,20);
head=newhead;
cout<<endl;
tail=TogiveTail_PrintDLl(head);
}

Node * CreateDLl(  ){
   Node *head=new Node(10);
   Node * curr=head;
   bool flag=1;
   while(flag){
     int data;
    cout<<"Enter Data\n";
    cin>>data;
   Node * newnode= new Node(data);
   curr->next=newnode;
   newnode->prev=curr;
    curr=newnode;
    cout<<"Wanna add more data..Yes=1/No=0\n";
    cin>>flag;
   }
   return head;

}
Node *TogiveTail_PrintDLl(Node *head){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data<<endl;
    return head;
}
void ReversePrintedLl(Node * tail){

while(tail){
    cout<<tail->data<<" ";
    tail=tail->prev;
}

cout<<endl;

}
Node * InsertAtBeg(Node *head,int data){

Node * newnode= new Node(data);
head->prev=newnode;
newnode->next=head;
head=newnode;
return head;



}