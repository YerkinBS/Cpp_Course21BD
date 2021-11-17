#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int mx_occ = 0, cnt = 1;
    char x;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]) cnt++;
        else{
            if(mx_occ < cnt){
                mx_occ = cnt;
                x = s[i];
            }
            cnt = 1;
        }
    }
    if(mx_occ < cnt){
        mx_occ = cnt;
        x = s[s.size() - 1];
    }
    cout << x << ' ' << mx_occ;
}