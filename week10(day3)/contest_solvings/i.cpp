#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, bool> was;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!was[s[i]]){
            cout << s[i];
            was[s[i]] = true;
        }
    }
}