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
    cout << (find(v.begin(), v.end(), k) != v.end() ? "Yes" : "No");
}