#include <bits/stdc++.h>
using namespace std;
struct Trie{
    Trie *child[26];
    bool end;
};

Trie *getNode(){
    Trie *temp = new Trie;

    for(int i = 0; i < 26; i++){
        temp->child[i] = NULL;
    }
    temp->end = 0;
    return temp;
}

bool search(Trie *root, string s){
    Trie *part = root;
    
    for(char c: s){
        if(!part->child[c-'a'])return 0;
        part = part->child[c-'a'];
    }
    //REWRITE HERE
    if(part->end)return 1;
    return 0;
}

void insert(Trie *root, string s){
    Trie *part = root;
    
    for(char c:s){
        if(!part->child[c - 'a']){
            part->child[c - 'a'] = getNode();   
        }
        part = part->child[c-'a'];
    }
    part->end = 1;
}

int main(){
    Trie *root = getNode();
    string keys[] = {"the", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    
    for(int i = 0; i < 8; i++){
        insert(root, keys[i]);   
    }
    
    
    //during creating and accepting as parameter we use *.
    
    if(search(root, "the"))cout<<"Yes\n";
    else cout<<"No\n";
    
    if(search(root, "thei"))cout<<"Yes\n";
    else cout<<"No\n";
    
    if(search(root, "their"))cout<<"Yes\n";
    else cout<<"No\n";
    
    
}
