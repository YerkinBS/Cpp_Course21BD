#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int x; cin >> x;
        map<int, int> mp1;
        map<int, int> mp2;
        for(int j = 0; j < x; j++){
            int k; cin >> k;
            mp1[k]++; mp2[k] = j + 1;
        }
        bool ok = true;
        for(auto i : mp1){
            if(i.second == 1){
                v.push_back(mp2[i.first]);
                ok = false;
                break;
            }
        }
        if(ok) v.push_back(0);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) cout << "Chrono Crusader!\n";
        else cout << v[i] << "\n";
    }
}