#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        mp[x]++;
    }
    for(auto i : mp) cout << i.first << " - " << i.second << '\n';
}