#include <bits/stdc++.h>
using namespace std;

bool x(int n, int i = 1){
    if(i == n) return true;
    if(i > n) return false;
    return x(n, i * 2); 
}

int main(){
    int n; cin >> n;
    cout << (x(n) ? "Power of two" : "Not power of two");
}