# include<iostream>
using namespace std;
class Node{
public:
int data;
Node * left;
Node * right;

Node( int data ){
 this->data=data;
 this->left=NULL;
 this->right=NULL;
}
};
Node* Insertion(Node * root ,int val);
void  InorderTraversal(Node *root);
int Searching(Node * root ,int val);
int main(  ){
    Node * root=NULL;
    root=Insertion(root,50);
    root=Insertion(root,40);
    root=Insertion(root,30);
    root=Insertion(root,110);
    root=Insertion(root,20);
    root=Insertion(root,10);
    root=Insertion(root,5);
    root=Insertion(root,25);
 cout<<"Inorder Traversal of BST:\n";
  InorderTraversal(root);

}
Node* Insertion(Node * root ,int val){


if(root==NULL){ // If root is null,Create the newnode return addrress
Node * newnode=new Node(val);
return newnode;
}
if(val>=root->data)// If value to be inserted is greater than to or equal root's value ,recurse right
root->right=Insertion(root->right,val);
else if(val<root->data)//If value to be inserted is smaller than root's value ,recurse left
root->left=Insertion(root->left,val);
return root;

}
void  InorderTraversal(Node *root){// Left Root Right
 if(root==NULL)
 return;
 InorderTraversal(root->left);
 cout<<root->data<<" ";
 InorderTraversal(root->right);

}

int Searching(Node * root ,int val){
if(root==NULL){ // If root is null,Create the newnode return addrress
return -1;
}
if(val>root->data)// If value to be inserted is greater than to or equal root's value ,recurse right
return Insertion(root->right,val);
else if(val<root->data)//If value to be inserted is smaller than root's value ,recurse left
return Insertion(root->left,val);
else if(val==root->data)
return 1;

}

// Operations to be implemented
// 1. Searching for an element
// 2.  Height of BST
// 3.  No. of nodes
// 4. No. of internal nodes
// 5. No. of leaves
// 6 Smallest & largest Node
// 7. Mirror image of BST
