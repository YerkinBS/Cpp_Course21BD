#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int k){
    if(k == 0) return n;
    else return gcd(k, n % k);
}

int main(){
    int n, x; cin >> n;
    int mx_gcd = -999, arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            x = gcd(arr[i], arr[j]);
            if(mx_gcd < x) mx_gcd = x;
        }
    }
    cout << mx_gcd;
}
