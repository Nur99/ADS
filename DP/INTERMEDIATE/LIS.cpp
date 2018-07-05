/*
Let's think we have a binary tree and a set. We should fill set with a vertices of a binary tree. But we have a rule. Every element of 
set cannot be connected with other elements of set. Find maximum size of set. 
*/

#include <bits/stdc++.h>
using namespace std;
struct node{
    int data, liss;
    struct node *left, *right;
};
struct node *newNode(int data){
    node *temp = new node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    temp -> liss = 0;
    return temp;
}
int LISS(node *root){
    if(root == NULL)return 0;
    if(root -> left == NULL && root -> right == NULL)return root->liss = 1;
    
    //include current root
    int excl = LISS(root->left) + LISS(root->right);
    
    int incl = 1;
    if(root->left) incl += LISS(root->left->left) + LISS(root->left->right);
    if(root->right) incl += LISS(root->right->left) + LISS(root->right->right);
    
    root->liss = max(excl, incl);
    
    return root->liss;
}
int main(){
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    printf ("Size of the Largest Independent Set is %d ", LISS(root));
}
