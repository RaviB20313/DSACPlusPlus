#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
int height(Node* root){
        if(root==NULL){
            return 0;
        }
        int op1=1+height(root->left);
        int op2=1+height(root->right);
        return max(op1,op2);
    }
    

    int diameter(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        int op1=height(root->left)+1+height(root->right);
        int op2=diameter(root->left);
        int op3=diameter(root->right);
        return max(op1,max(op2,op3));
    
    }
int main(){

    return 0;
}