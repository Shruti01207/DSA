# include<iostream>
using namespace std;
class Node{
    public:
int data;
Node *next;
 Node(int data){
    this->data=data;
    this->next=NULL;
 }
};
void CreateCircularLl(    );
void Display(  );
void InsertAtBeg(  );
void InsertAtLast(   );
Node * head=NULL;
Node * tail=NULL;
int main(  ){
CreateCircularLl( );
InsertAtBeg(  );
InsertAtBeg( );
Display( );
InsertAtLast( );
InsertAtLast(  );
Display( );


}
void CreateCircularLl(    ){

Node *newnode=new Node(10);
head=newnode;
newnode->next=head;
Node * prev=head;
bool flag=0;
cout<<"Want to add more data?\n";
cin>>flag;

while(flag){
int data;
cout<<"Input Data\n";
cin>>data;
newnode=new Node(data);
prev->next=newnode;
newnode->next=head;
prev=newnode;
cout<<"Want to add more data?\n";
cin>>flag;
}
  tail=prev;
}
void Display(  ){
 
    cout<<head->data<<" ";
   Node* temp=head->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}
void InsertAtBeg(  ){
  int data;
cout<<"Input Data\n";
cin>>data;
 Node *newnode=new Node(data);  
    if(tail==NULL)// list is empty
    {
        head=tail=newnode;
        tail->next=head;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
        head=newnode;
    }
    return;
}
void InsertAtLast(   ){
    int data;
cout<<"Input Data\n";
cin>>data;
 Node *newnode=new Node(data);  
 if(tail==NULL)// list is empty
    {
        head=tail=newnode;
        tail->next=head;
    }
else{
     newnode->next=tail->next;
     tail->next=newnode;
     tail=newnode;
    }
}