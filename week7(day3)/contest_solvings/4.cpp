#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size() - i - 1; j++){
            if(v[j] > v[j + 1]) swap(v[j], v[j + 1]);
        }
    }
    for(auto i : v) cout << i << ' ';
}