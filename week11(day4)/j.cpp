#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    int n; cin >> n;
    while(n--){
        string name; int x;
        cin >> name >> x;
        mp[name] += x;
    }

    for(auto i : mp) cout << i.first << ' ' << i.second << '\n';
}