#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> st;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) st.insert(tolower(s[i]));
    cout << st.size() << '\n';
    for(auto i : st) cout << i << ' ';
}