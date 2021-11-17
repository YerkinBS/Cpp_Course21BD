#include <bits/stdc++.h>
using namespace std;

int main(){
    long long d, c, n; cin >> d >> c >> n;
    long long Di, Ci; cin >> Di >> Ci;

    long long payment = n * ((d * 100) + c);
    long long summ = (Di * 100) + Ci;

    if(payment > summ) cout << -1; 
    else{
        long long rem = summ - payment;
        cout << rem / 100 << ' ' << rem % 100;
    }
}