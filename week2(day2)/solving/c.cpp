#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, mn = 9999, mx = -9999; cin >> n;
    while(n--){
        cin >> x;
        if(mn > x) mn = x;
        if(mx < x) mx = x;
    }
    cout << mx - mn;
}