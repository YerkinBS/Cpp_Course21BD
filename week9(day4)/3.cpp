#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2){
    if(n < 2) return false;
    if(n == 2) return true;
    if(i >= n) return true;
    if(n % i == 0) return false;
    return isPrime(n, i + 1);
}

int main(){
    int n; cin >> n;
    if(isPrime(n)) cout << "Prime";
    else cout << "Not Prime";
}