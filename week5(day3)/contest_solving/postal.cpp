#include <bits/stdc++.h>
using namespace std;
int a, b;

bool Code_Check(string s){
    if(s.size() != a + b + 1) return false;

    if(!(s[a] == '-')) return false;

    for(int i = 0; i < s.size(); i++){
        if(i != a){
            if(!(s[i] >= '0' and s[i] <= '9')) return false;
        }    
    }
    return true;
}

int main(){
    cin >> a >> b;
    string code; cin >> code;
    cout << (Code_Check(code) ? "Yes" : "No");
}