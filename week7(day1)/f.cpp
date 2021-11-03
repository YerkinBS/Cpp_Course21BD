#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int k, a; cin >> k >> a;
    v.insert(v.begin() + k, a);
    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
}