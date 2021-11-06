#include <bits/stdc++.h>
using namespace std;

bool Pow_2(int n, int num){
    if(num == n) return true;
    if(num > n) return false;
    return Pow_2(n, num * 2);
}

int main(){
    int n; cin >> n;
    if(Pow_2(n, 1)) cout << "YES";
    else cout << "NO";
}