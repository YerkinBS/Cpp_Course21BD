#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto i : mp) cout << i.first << " - " << i.second << '\n';
}


// 8
// 1 23 5 5 5 6 6 1

// 1 - 2
// 5 - 3
// 6 - 2
// 23 - 1