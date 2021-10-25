#include <bits/stdc++.h>
using namespace std;

int main(){
    string inp, key;
    getline(cin, inp);
    getline(cin, key);
    int x, i = 0;

    while(i < inp.size()){
        if(inp.substr(i, key.size()) == key){
            x = key.size();
            while(x--) cout << '*';
            i += key.size();
        }
        else cout << inp[i++];
    }
}