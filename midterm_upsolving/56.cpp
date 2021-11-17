#include <bits/stdc++.h>
using namespace std;

void dexToHex(int value){
    if (value == 0) return;
    int rem = value % 16;
    value /= 16;
    dexToHex(value);
    if (rem > 9) cout << (char)(rem - 10 + 'A');
    else cout << rem;
}

int main(){
    int n; cin >> n;
    dexToHex(n);
}