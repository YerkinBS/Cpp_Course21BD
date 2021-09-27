#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, mx = INT_MIN, mn = INT_MAX; cin >> n;
    while(n--){
        cin >> x;
        if(mx < x) mx = x;
        if(mn > x) mn = x;
    }
    cout << mx - mn;
}