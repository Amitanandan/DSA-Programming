#include<bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

int height(node* root){
    if(root == NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh , rh) + 1;
}

bool isBalanced(node* root){
    if(root == NULL) return true;
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else return false;
}// O(n^2)

bool IsBalanced(node* root ,int * height){
    if(root == NULL){
        return true;
    }
    int lh =0, rh =0;
    if(IsBalanced(root->left ,& lh) ==false){
        return false ;
    }
    if(IsBalanced(root->right , &rh) == false){
        return false;
    }
    *height = max(lh , rh) +1;
    if(abs(lh - rh)<= 1){
        return true;
    }
    else return false;
}//O(n)

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    int height =0; 
    if(IsBalanced(root,&height)) cout<<"Balanced tree" ;
    else cout<<"not Balanced tree" ;
    

    

    return 0;
}