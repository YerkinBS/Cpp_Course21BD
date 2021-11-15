#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int k){
    if(k == 0) return n;
    else return gcd(k, n % k);
}

int lcm(int n, int k){
    return((n * k) / gcd(n, k));
}

int main(){
    cout << gcd(24, 54);
}