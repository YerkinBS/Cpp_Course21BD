#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int k){
    if(k == 0) return n;
    else return gcd(k, n % k);
}

int main(){
    int a, b; cin >> a >> b;
    cout << gcd(a, b);   
}