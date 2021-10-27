#include <bits/stdc++.h>
using namespace std;

bool degree_check(int n, int check){
    if(check > n) return false;
    if(check == n) return true;
    return degree_check(n, check * 2);
}

int main(){
    int n; cin >> n;
    cout << (degree_check(n, 1) ? "YES" : "NO");
}