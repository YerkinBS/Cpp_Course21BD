#include <bits/stdc++.h>
using namespace std;
vector<int> v;
map<int, bool> mp;

int main(){
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        if(!mp[x]){
            v.push_back(x);
            mp[x] = true;
        }
    }

    sort(v.begin(), v.end());
    do{
        for(int i : v) cout << i << ' ';
        cout << '\n';
    }
    while(next_permutation(v.begin(), v.end()));
}