#include <bits/stdc++.h>
using namespace std;

bool Uniq_Digits(int x){
    set<char> st;
    string s = to_string(x);
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    return s.size() == st.size();
}

int main(){
    int l, r; cin >> l >> r;
    bool ok = false;
    while(l <= r){
        if(Uniq_Digits(l++)){
            cout << --l;
            ok = true;
            break;
        }
    }
    if(!ok) cout << "Understandable, have a great day";
}