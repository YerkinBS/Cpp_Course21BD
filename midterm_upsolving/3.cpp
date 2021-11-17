#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(string x){
    string t = x;
    reverse(x.begin(), x.end());
    if(x == t) return true;
    return false;
}

int main(){
    int n; cin >> n;
    string bin = "";
    while(bin.size() != 8){
        bin += (n % 2) + '0';
        n /= 2;
    }
    cout << (IsPalindrome(bin) ? "It works!" : "Sad");
}