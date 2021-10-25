#include <bits/stdc++.h>
using namespace std;

void Rec(string s, int i){
    if(i < 0) return;
    cout << s[i] << " ";
    Rec(s, --i);
}

int main(){
    string s; cin >> s;
    Rec(s, s.size() - 1);
}