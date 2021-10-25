#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1;
    int mx = -999;
    for(int i = 0; i < s.size(); i++){
        if(i + 1 < s.size() and s[i] == s[i + 1]) cnt++;
        else{
            if(mx < cnt) mx = cnt;
            cnt = 1;
        }
    }
    cnt = 1;
    for(int i = 0; i < s.size(); i++){
        if(i + 1 < s.size() and s[i] == s[i + 1]) cnt++;
        else{
            if(cnt == mx){
                cout << s[i] << " " << cnt << "\n";
                break;
            }
            cnt = 1;
        }
    }
} 

