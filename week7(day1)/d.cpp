#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;
    v.erase(v.begin() + k, v.begin() + k + 1);   //[0 + k; 0 + k + 1)
    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
}