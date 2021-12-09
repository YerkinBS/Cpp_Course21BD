#include <bits/stdc++.h>
using namespace std;

bool isPower(int n, int num = 1){
    if(num > n) return false;
    if(num == n) return true;
    return isPower(n, num * 4);
}

int main(){
    int n; cin >> n;
    cout << (isPower(n) ? "YES" : "NO");
}