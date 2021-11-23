#include <bits/stdc++.h>
using namespace std;

int Summ(int n){
    if(!n) return n;
    return ((n % 10) / 2) + Summ(n / 10);
}

int main(){
    int n; cin >> n;
    cout << Summ(n);
}