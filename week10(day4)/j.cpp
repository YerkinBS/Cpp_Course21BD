#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string name; int eps;
    map<string, int> mp;
    while(n--){
        cin >> name >> eps;
        mp[name] += eps;
    }
    for(auto i : mp) cout << i.first << ' ' << i.second << '\n';    
}