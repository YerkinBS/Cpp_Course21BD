#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void Rec(int n, int num){
    if(n % num == 0 && IsPrime(num)){
        cout << num << " ";
    }
    if(num == n) return;
    Rec(n, ++num);
}

int main(){
    int n; cin >> n;
    Rec(n, 2);
}