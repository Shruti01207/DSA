// Creation of Linked List
# include<iostream>
# define ll long long
using namespace std;
class Node {
    public:
    int data;
    Node * next;
  Node(int data){// Constructor
    this->data=data;
    this->next=NULL;
   }
}; // Representation of a Node
void  ToCreateLl(Node * head);
void PrintLl(Node *head);
void Recur_PrintLl(Node *head);
Node* InsertatHead(Node *head,ll data );
Node * InsertatithPos(Node * head,ll data,int pos);
int main( ){

Node * head= new  Node(10); // Syntax of using new--> pointer_var= new data type
ToCreateLl(head);
//PrintLl(head);
Recur_PrintLl(head);
Node *newhead=InsertatHead(head,1000);
head=newhead;
cout<<endl;
Recur_PrintLl(head);
ll data,pos;
cout<<"Enter Data & Pos to insert node at ith position\n";
cin>>data>>pos;
newhead=InsertatithPos(head,data,pos);
head=newhead;
cout<<endl;
Recur_PrintLl(head);

cout<<endl;
//sPrintLl(head);

}
void ToCreateLl(Node * head){// head=100;
Node * tail=head;// temporary var storing head address
bool flag;
cout<<"Want to add more data? 1/0\n";
cin>>flag;
 while(flag){
    ll data;
    cout<<"Enter Data\n";
    cin>>data;  
 Node * newnode= new  Node(data);
 tail->next=newnode;
 tail= newnode;
 cout<<"Want to add more data? 1/0\n";
 cin>>flag;
 }//O(No. of nodes)
 return;
}
void PrintLl(Node * head){
    Node * temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }//O(No. of nodes)
}
// Recurvise Program to print Ll
void Recur_PrintLl(Node *head){
    cout<<head->data<<",";
    if(head->next)
    Recur_PrintLl(head->next);
    return;
}

Node* InsertatHead(Node *head,ll data ){
    Node *newnode= new Node(data);// ptr_var= new DataType/Dynamic allocation
   newnode->next=head;
   head=newnode;
   return head;
}
Node * InsertatithPos(Node * head,ll data,int pos){
    // Create node which you want to insert
    if(pos==1){
     Node *newhead =InsertatHead(head,data);
     head=newhead;
     return head;
    }
    Node *newnode= new Node(data);
    int curr_pos=1;
    Node * temp=head;
    while(temp && curr_pos!=pos-1){
        temp=temp->next;
        ++curr_pos;
    } 
    if(temp==NULL){
        cout<<"Pos doesn't exists\n";
        return head;
    }
   
   Node * partition=temp->next;
   temp->next=newnode;
   newnode->next=partition;
   return head;

}