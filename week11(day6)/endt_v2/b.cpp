#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    set<char> st;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    return st.size() == s.size();
}

int main(){
    int l, r; cin >> l >> r;
    while(l <= r){
        if(check(to_string(l++))){
            cout << --l;
            return 0;
        }
    }
    cout << "Understandable, have a great day";
}