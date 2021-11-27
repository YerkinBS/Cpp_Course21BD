#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int x = 0;
    while(x < s.size()) cout << s.substr(0, ++x) << '\n';
    while(x > 1) cout << s.substr(0, --x) << '\n';
}