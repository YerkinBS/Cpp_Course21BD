#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> mp;
    string s; getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' ') mp[s[i]]++;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            if(mp[s[i]] % 2 == 0) cout << 'e';
            else cout << 'o';
        }
        else cout << ' ';
    }
}