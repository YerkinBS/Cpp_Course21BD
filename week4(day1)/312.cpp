#include <bits/stdc++.h>
using namespace std;

int phi(int n){
    if(n <= 1) return n;
    int f[n + 2];
    int i = 0;
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main(){
    int n; cin >> n;
    cout << phi(n);
}