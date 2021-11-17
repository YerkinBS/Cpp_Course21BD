#include <bits/stdc++.h>
using namespace std;

string to_binary(int x){
    string bin = "";
    while(bin.size() < 8){
        bin += char(x % 2) + '0';
        x /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main(){
    int a, n; cin >> a >> n;
    int b, k; cin >> b >> k;

    string a_bin = to_binary(a);
    string b_bin = to_binary(b);

    cout << (a_bin[a_bin.size() - 1 - n] == b_bin[b_bin.size() - 1 - k] ? "Thunderclap and Flash!" : "Thunder Breathing... First form...");
}