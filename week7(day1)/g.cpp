#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    if(x == 2) return true;

    for(int i = 2; i < sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n, x; cin >> n;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int k, cnt = 0; cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) && v[i] > k) cnt++;
    }
    cout << cnt;
}