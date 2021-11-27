#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, bool> mp_v1, mp_v2;
    vector<int> v1, v2, v3;
    int n, m; cin >> n >> m;
    while(n--){
        int x; cin >> x;
        if(!mp_v1[x]){
            v1.push_back(x);
            mp_v1[x] = true;
        }
    }
    while(m--){
        int x; cin >> x;
        if(!mp_v2[x]){
            v2.push_back(x);
            mp_v2[x] = true;
        }
    }

    int i = 0, j = 0;
    while(v3.size() < v1.size() + v2.size()){
        v3.push_back(v1[i++]);
        v3.push_back(v2[j++]);
    }

    for(auto i : v3) cout << i << ' ';
}