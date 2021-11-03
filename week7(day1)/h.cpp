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
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++) cout << v[i] << ' ';
}