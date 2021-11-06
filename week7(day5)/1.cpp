#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> mp;
    int i = 0;
    for(char a = 'A'; a <= 'Z'; a++) mp[a] = ++i;  
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        ans *= 26;
        ans += mp[s[i]];
    }
    cout << ans;
}