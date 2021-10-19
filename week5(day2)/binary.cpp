#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string bin = "";
    while(bin.size() < 8){
        bin += char(n % 2) + '0';
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    for(int i = 0; i < bin.size(); i++){
        if(bin[i] == '1') bin[i] = '0';
        else bin[i] = '1';
    }
    
    int x, pw = bin.size() - 1;
    int ans = 0;
    for(int i = 0; i < bin.size(); i++){
        x = bin[i] - '0';
        ans += (x * pow(2, pw));
        pw--;
    }
    cout << ans;
}


