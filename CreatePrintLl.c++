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

int main( ){

Node * head= new  Node(1); // Syntax of using new--> pointer_var= new data type
ToCreateLl(head);
//PrintLl(head);
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
 }
 return;
}
void PrintLl(Node * head){
    Node * temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
// Recurvise Program to print Ll
void Recur_PrintLl(Node *head){
    cout<<head->data<<",";
    if(head->next)
    Recur_PrintLl(head->next);
    return;
}