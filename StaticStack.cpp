# include<iostream>
using namespace std;
void Display(int stack[ ],int &top);
void Push(int stack[ ],int &top,int data);
int Pop(int stack[] ,int &top);
int Peek(int stack[ ], int &top);
bool isEmpty(int stack[ ],int &top);
bool isFull(int stack[ ],int &top);
int N=5;
int main( ){
 int stack[N];
 int top=-1;  // -1 indicate that our stack is empty
 cout<<Peek(stack,top)<<endl;
 for(int i=1;i<=6;++i){
    Push(stack,top,i);
 }
Display(stack,top);
cout<<"Value on the top of the stack is="<<Peek(stack,top)<<endl;
cout<<"Popped item is"<<Pop(stack,top)<<endl;
cout<<"Value on the top of the stack is="<<Peek(stack,top)<<endl;
Display(stack,top);
cout<<"Popped item is"<<Pop(stack,top)<<endl;
cout<<"Popped item is"<<Pop(stack,top)<<endl;
Display(stack,top);
cout<<"Popped item is"<<Pop(stack,top)<<endl;
Push(stack,top,6);
Display(stack,top);
for(int i=1;i<=3;++i){
    cout<<"Popped item is"<<Pop(stack,top)<<endl;
}

}
void Push(int stack[ ],int &top,int data){// To fill an container
    if(isFull(stack,top )==true){
    cout<<"Overflow Condition\n";
    return ;
    }
    ++top;
    stack[top]=data;
}
int Pop(int stack[] ,int &top)//To empty an container & to get the popped item
{
    if(isEmpty(stack,top)==true){
     cout<<"Underflow Condition\n";
     return -1;
    }
     int data=Peek(stack,top);// To get what is the most recent inserted item
    --top;
    return data;
}
int Peek(int stack[ ], int &top){
    if(isEmpty(stack,top)){
        cout<<"Container is Empty :(\n";
        return -1;
    }
    return stack[top];
}
void Display(int stack[ ],int &top){
    
    for(int i=top;i>=0;--i){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
bool isEmpty(int stack[ ],int &top){
    if(top==-1)
    return true;

    return false;
}
bool isFull(int stack[ ],int &top){
    if(top==N-1)
    return true;

    return false;
}
