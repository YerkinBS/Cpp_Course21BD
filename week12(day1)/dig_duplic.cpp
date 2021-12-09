#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, bool> mp;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            if(!mp[s[i]]) cout << s[i];
            mp[s[i]] = true;
        }
        else cout << s[i];
    }
}