#include <iostream>
#include <string>
#include <vector>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int childcount;
    bool isTreminal;
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        childcount=0;
        isTreminal=false;
    }

};
class Trie{
    public:
    TrieNode* root;
    Trie(char ch){
        root=new TrieNode(ch);
    }
    void insertUtil(TrieNode* root,string word){
        if(word.length()==0){
            root->isTreminal=true;
            root->childcount++;
            return;
        }
        int index= word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            child = new TrieNode(word[0]);
            root->children[index]=child;
            root->childcount++;
        }
        insertUtil(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }
    void lcp(string str,string &ans){
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(root->childcount==1){
                ans.push_back(ch);
                int index=ch-'a';
                root=root->children[index];
            }else{
                break;
            }
            if(root->isTreminal){
                break;
            }
        }
    }
};
string longestCommonPrefix(vector<string> &arr, int n){
    // Write your code here
        Trie* t=new Trie('\0');
        for(int i=0;i<n;i++){
            t->insertWord(arr[i]);
        }
    string ans="";
    t->lcp(arr[0],ans);
    return ans;
}


//using brute force
string longestCommonPrefix_brute(vector<string> &arr, int n)
{
    // Write your code here
    string ans;
    for(int i=0;i<arr[0].length();i++){
        char ch= arr[0][i];
        bool match=true;
        for(int j=1;j<n;j++){
            if(arr[j].size()<i|| ch!=arr[j][i]){
                match=false;
                break;
            }
        }
        if(match==false){
            break;
        }else{
            ans.push_back(arr[0][i]);
        }
    }
    return ans;
}



