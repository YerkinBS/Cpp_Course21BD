#include <bits/stdc++.h>
using namespace std;

// bool Degree_Of_Two()

int main(){
    int n; cin >> n;

    long long num = 1;
    bool ok = true;
    while(true){
        if(num == n) break;
        if(num > n){
            ok = false;
            break;
        }
        num *= 2;
    }
    cout << (ok ? "Yes" : "No");
}