#include <bits/stdc++.h>
using namespace std;

int main(){
    string inp, key;
    getline(cin, inp);
    getline(cin, key);
    for(int i = 0; i < inp.size(); i++){
        if(inp.substr(i, key.size()) == key){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}