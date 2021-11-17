#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    char x; cin >> x;

    for(int i = 0; i < s.size(); i++){
        if(t.find(s[i]) == string :: npos) cout << s[i];
        else cout << x;
    }
}