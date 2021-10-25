#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if('a' <= s[i] and s[i] <= 'z') s[i] -= 32;
    }

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i, 4) == "KBTU") ans++;
    }
    cout << ans;
}