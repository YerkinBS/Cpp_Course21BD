#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, mn = INT_MAX; cin >> n;
    while(n--){
        cin >> x;
        if(mn > x) mn = x;
    }
    cin >> m;
    while(m--){
        cin >> x;
        if(x % mn == 0) cout << x << " ";
    }
}