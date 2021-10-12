#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s, ans = "";
    while(n--){
        cin >> s;
        if(ans.size() == 0){
            s[0] = char(s[0] - 32);
            ans += s;
            ans += ' ';
        }
        else{
            ans += s;
            ans += ' ';
        }
    }
    ans[ans.size()-1] = '.';
    cout << ans;
}