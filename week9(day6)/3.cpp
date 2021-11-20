#include <bits/stdc++.h>
using namespace std;

char convert(int x){
    if(x > 9) return 'A' + x - 10;
    return x + '0';
}

string K_inary(int n, int k, string kin = ""){
    if(!n) return kin;
    return K_inary(n / k, k, kin += convert(n % k));
}

int main(){
    int n, k; cin >> n >> k;
    string K_n = K_inary(n, k);
    reverse(K_n.begin(), K_n.end());
    cout << K_n;
}