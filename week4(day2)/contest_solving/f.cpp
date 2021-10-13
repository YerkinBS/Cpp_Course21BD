#include <bits/stdc++.h>
using namespace std;

void dunno(int n){
    int x = 1, digit, tmp;
    bool ok = true;
    while(x <= n){
        tmp = x;
        while(tmp){
            digit = tmp % 10;
            if(digit != 8 and digit != 3) ok = false;
            tmp /= 10;
        }
        if(ok) cout << x << "\n";
        else ok = true;
        x++;
    }
}

int main(){
    int n; cin >> n;
    dunno(n);
}