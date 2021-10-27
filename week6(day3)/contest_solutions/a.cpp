#include <bits/stdc++.h>
using namespace std;

void rec(string s, int i){
    if(s[i] >= 'A' && s[i] <= 'Z'){
        cout << s[i];
        return;
    }
    if(i == s.size()-1){
        cout << -1;
        return;
    }
    rec(s, ++i);
}

int main(){
    string s; cin >> s;
    rec(s, 0);
}