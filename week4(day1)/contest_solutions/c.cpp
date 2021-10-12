#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s;
    bool cr1 = false, cr2 = false, cr3 = false, cr4 = false, cr5 = false;
    if(s.size() >= 7) cr5 = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') cr1 = true;
        if(s[i] >= 'a' && s[i] <= 'z') cr2 = true;
        if(s[i] >= '0' && s[i] <= '9') cr3 = true;
        if(s[i] == '!' || s[i] == '$') cr4 = true;
        if(s[i] == '#' || s[i] == '%') cr4 = true;
        if(s[i] == '^' || s[i] == '&') cr4 = true;
        if(s[i] == '*' || s[i] == '(') cr4 = true;
        if(s[i] == '_' || s[i] == ')') cr4 = true;
        if(s[i] == '/' || s[i] == '?') cr4 = true;
    }
    cout << ((cr1 && cr2 && cr3 && cr4 && cr5) ? "Acceptable" : "Not acceptable");
}