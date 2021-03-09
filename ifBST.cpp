/* checking if binary tree is BST : in BST all the left nodes are smaller than root and larger nodes are placed at right nodes.*/

#include<iostream>
using namespace std;
#include<climits>

struct node1{
    int data;
    node1 * left;
    node1 * right;
};
typedef node1 node;

bool isBST(node *root, int min , int max)
{
    if (root == NULL) return true;
    
   if(root->data < min || root->data > max)
   return false;
   
   return (isBST(root->left,min, root->data -1)&& isBST(root->right, root->data +1 , max) );
    
}

node* getnewnode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
    
    node *root =getnewnode(10);
    root->left=getnewnode(5);
    root->right= getnewnode(15);
    root->left->left = getnewnode(3);
    root->left->right = getnewnode(6);
    
    
    cout<<isBST(root,INT_MIN, INT_MAX);
    return 1;
}
