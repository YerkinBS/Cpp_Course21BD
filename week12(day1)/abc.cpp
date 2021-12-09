#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 1, i = 1;
    while(i < s.size()){
        if(s[i] == s[i - 1] + 1) cnt++;
        else if(cnt != 1){
            if(i == s.size() - 1 || (i + 1 != s.size() && s[i] != s[i + 1] - 1)) cout << cnt << s[i];
            else cout << cnt;
            cnt = 1;
        }
        else cout << s[i];
        i++;
    }
    if(cnt != 1) cout << cnt;
}