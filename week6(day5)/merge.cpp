#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n, m, x; cin >> n;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    while(m--){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}