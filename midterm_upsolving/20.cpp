#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int sum = 0;
    for(int i = 1; i < s.size(); i++) sum += s[i] - '0';
    cout << (s[0] - '0' == sum % 10 ? "YES" : "NO");
}