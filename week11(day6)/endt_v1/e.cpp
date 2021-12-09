#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    set<char> st;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    return st.size() == s.size();
}

int main(){
    int n; cin >> n;
    while(n++){
        if(check(to_string(n))){
            cout << n;
            break;
        }
    }
}