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
int helper(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int op1=1+ helper(node->left);
        int op2=1+helper(node->right);
        return max(op1,op2);
        
    }
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
            
        }
        return helper(node);
        
    }
int main(){
    return 0;
}