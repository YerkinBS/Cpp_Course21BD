#include <bits/stdc++.h>
using namespace std;
map<char, int> mp;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) mp[s[i]]++;
    for(auto i : mp) if(i.second == 1) cout << i.first;
}