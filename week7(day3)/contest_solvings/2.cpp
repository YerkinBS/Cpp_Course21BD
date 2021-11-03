#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v; int x;
    int n; cin >> n;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int m; cin >> m;
    while(m--){
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    for(auto i : v) cout << i << ' ';
}