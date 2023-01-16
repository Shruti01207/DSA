# include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;


    TreeNode(int  data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void Inorder(TreeNode * root);
TreeNode* Create(   );
int main( ){
TreeNode * root=Create( );
Inorder(root);
    
}

TreeNode* Create(   ){
int data;
cin>>data;
if(data==-1)
return NULL;
TreeNode * newnode = new TreeNode(data);
cout<<"Enter left child of "<<data<<endl;
newnode->left=Create( );
cout<<"Enter right child of "<<data<<endl;
newnode->right=Create( );
return newnode;
}
//Inorder Traversal-->Left Root Right
void Inorder(TreeNode * root){
    if(root==NULL)
    return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}