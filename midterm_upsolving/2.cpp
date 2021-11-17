#include <bits/stdc++.h>
using namespace std;
string bin_a, bin_b;

string to_binary(int x){
    string bin = "";
    while(bin.size() < 8){
        bin += char(x % 2) + '0';
        x /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int to_decimal(string bin){
    int x, pw = bin.size() - 1;
    int ans = 0;
    for(int i = 0; i < bin.size(); i++){
        x = bin[i] - '0';
        ans += (x * pow(2, pw--));
    }
    return ans;
}

void exchange(int x){
    char temp = bin_a[bin_a.size() - 1 - x];
    bin_a[bin_a.size() - 1 - x] = bin_b[bin_b.size() - 1 - x];
    bin_b[bin_b.size() - 1 - x] = temp;
}

int main(){
    int n; cin >> n;
    int a, b; cin >> a >> b;

    bin_a = to_binary(a), bin_b = to_binary(b);
    exchange(n);

    a = to_decimal(bin_a);
    b = to_decimal(bin_b);

    if(a == b) cout << "Nothing has changed";
    else if(a > b) cout << "Good deal for the first number";
    else cout << "Good deal for the second number";
}