#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        mp[s]++;
    }

    for(auto i : mp){
        if(i.second > 1) cout << i.first << '\n';
    }
}