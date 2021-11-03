#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int k, summ = 0; cin >> k;
    sort(v.begin(), v.end());
    
    for(int i = v.size() - 1; i >= k; i--) summ += v[i];
    cout << summ;
}