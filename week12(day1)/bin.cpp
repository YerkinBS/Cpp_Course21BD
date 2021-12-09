#include <bits/stdc++.h>
using namespace std;
int n;

string to_binary(int x){
    string bin = "";
    while(x){
        bin += char(x % 2) + '0';
        x /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cout << i << " in binary: " << to_binary(i) << '\n';
}