#include <bits/stdc++.h>
using namespace std;
bool ch = 0;

struct Trie{
    Trie *child[2];
};

Trie *getNode(){
    Trie *temp = new Trie;
    temp->child[0] = temp->child[1] = NULL;
    return temp;
}

void insert(Trie *root, string s){
    Trie *part = root;
    
    for(char c:s){
        int i = s[i]-'0';
        if(!part->child[i]){
            part->child[i] = getNode();   
            ch = 1;
        }
        part = part->child[i];
    }
}

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        Trie *root = getNode();

        int n, m,ans = 0;
        cin>>n>>m;
        
        for(int i = 1; i <= n; i++){
            string s;
            for(int j = 1; j <= m; j++){
                int x;
                cin>>x;
                s += '0'+x;
            }
            insert(root, s);
            if(ch){
                for(char j:s){
                    cout<<j<<' ';   
                }
                cout<<'$';
            }
            ch = 0;
        }
        cout<<endl;
    }
}
