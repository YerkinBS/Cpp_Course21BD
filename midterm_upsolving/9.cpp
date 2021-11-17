#include <bits/stdc++.h>
using namespace std;

string to_binary(int x){
    string bin = "";
    while(x){
        bin += char(x % 2) + '0';
        x /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

void Res(int n){
    string bin = to_binary(n);
    cout << bin;
    cout << '\n' << "zeros " << count(bin.begin(), bin.end(), '0');
    cout << '\n' << "number of units " << count(bin.begin(), bin.end(), '1');
} 

int main(){
    int n; cin >> n;
    Res(n);
}