#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for(auto i : mp){
        if(i.second >= 3) cnt++;
    }
    cout << cnt;
}