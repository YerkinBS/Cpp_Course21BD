#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int x){
    if(x == 2) return true;
    for(int i = 2; i < x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int n_check = 1;
    int prime = 2;
    while(true){
        if(IsPrime(prime)){
            if(n_check == n){
                cout << prime;
                break;
            }
            n_check++;
        }
        prime++;
    }
}