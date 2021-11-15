#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> mp;
    for(char a = '0'; a <= '9'; a++) mp[a];

    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9') mp[s[i]]++;
    }

    for(auto i : mp){
        if(i.second == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}