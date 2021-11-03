#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n, f; cin >> n >> f;
    if(n <= 500 && isPrime(n) && f % 2 == 0){ 
        cout << "Good job!";
    }
    else cout << "Try next time!";
}