#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, cnt; cin >> n;
    map<int, vector<int>> mp;
    while(n--){
        cin >> x;
        cnt = 0;
        for(int j = 1; j <= x; j++){
            if(x % j == 0) cnt++;
        }
        mp[cnt].push_back(x);
    }
    for(auto i : mp){
        sort(i.second.begin(), i.second.end());
        for(auto j : i.second) cout << j << ' ';
    }
}