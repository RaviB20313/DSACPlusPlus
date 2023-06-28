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
vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
      queue<Node* > q;
      q.push(node);
      
      while(!q.empty()){
          Node* front =  q.front();
          q.pop();
          ans.push_back(front->data);
          
          if(front->left){
              q.push(front->left);
          }
          if(front->right){
              q.push(front->right);
          }
      }
      return ans;
    }
int main(){
    return 0;
}