#include <iostream>
#include <string>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie(){
        root= new TrieNode('/0');
    }
    void insertUtil(TrieNode* root,string word){
        if(word.length()==0){
            root->isTerminal = true;
            return;
        }
        //asumption, word will be in Capital
        int index=word[0]-'A';
        TrieNode* child;
        //Present 
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
        //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        //recursion
        insertUtil(child , word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }
    bool searchutil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            return root->isTerminal;
        }
        int index = word[0]-'A';
        TrieNode* child;
        if(root->children[index] !=NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return searchutil(child,word.substr(1));
    }
    bool search(string word){
        return searchutil(root,word);
    }
    void removeutil(TrieNode* root, string s){
        if(s.length()==0){
            root->isTerminal=false;
        }
        int index = s[0]-'A';
        TrieNode* child;
        if(root->children[index] !=NULL){
            child = root->children[index];
        }
        else{
            return;
        }
        removeutil(child,s.substr(1));
    }
    void remove(string s){
        removeutil(root,s);
        return;
    }

};

int main(){
    Trie t;
    t.insertWord("ABCD");
    t.insertWord("TIM");
    t.insertWord("AXXX");

    cout<<t.search("TIM")<<endl;
    t.remove("TIM");
    cout<<t.search("TIM")<<endl;

    return 0;
}