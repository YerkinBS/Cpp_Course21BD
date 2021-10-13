#include <bits/stdc++.h>
using namespace std;

int Power(int a, int b, int res = 1){
    while(b--) res *= a;
    return res;
}

int main(){
    int a, b; cin >> a >> b;
    cout << Power(a, b);
}