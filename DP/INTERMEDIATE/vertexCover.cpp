#include <bits/stdc++.h>
using namespace std;
struct node{
    int data, vc;
    node *left, *right;
};
struct node *newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;   
    temp->vc = 0;
    return temp;
}
int vCover(node *root){
    if(root == NULL)return 0;
    if(root->left == NULL && root->right == NULL)return 0;
    if(root->vc)return root->vc;
    
    int size_incl = 1 + vCover(root->left) + vCover(root->right);
 
    // Calculate size of vertex cover when root is not part of it
    int size_excl = 0;
    if (root->left)
      size_excl += 1 + vCover(root->left->left) + vCover(root->left->right);
    if (root->right)
      size_excl += 1 + vCover(root->right->left) + vCover(root->right->right);
 
    // Minimum of two values is vertex cover, store it before returning
    root->vc =  min(size_incl, size_excl);
    return root->vc; 
}
int main(){
    node *root = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
    cout<<vCover(root);
    printf("Size of the smallest vertex cover is %d", vCover(root));
}
