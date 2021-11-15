#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, bool> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x];
    }
    int cnt = 1;
    for(auto i : mp){
        if(cnt++ == n - 1) cout << i.first;
    }
}