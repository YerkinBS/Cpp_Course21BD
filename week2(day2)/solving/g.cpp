#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int digit;
    while(n){
        digit = n % 10;
        n /= 10;
        cout << digit;
    }
}