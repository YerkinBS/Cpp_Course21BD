#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    int lower = 0, upper = 0;
    for(int i = 0; i < n; i++){
        if('a' <= s[i] && s[i] <= 'z') lower += b;
        else if('A' <= s[i] && s[i] <= 'Z') upper += a;
    }
    cout << min(lower, upper);
}