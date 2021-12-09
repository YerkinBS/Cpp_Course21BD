#include <bits/stdc++.h>
using namespace std;
map<string, int> cnt;
map<string, int> :: iterator it;
map<int, vector<string>, greater<int>> mp;

int main(){
    string s;
    while(cin >> s) cnt[s]++;
    for(it = cnt.begin(); it != cnt.end(); it++) mp[it -> second].push_back(it -> first);
    for(auto el : mp){
        for(int i = 0; i < el.second.size(); i++) cout << el.second[i] << " : " << el.first << '\n';
    }
}