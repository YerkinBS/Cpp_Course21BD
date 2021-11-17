#include <bits/stdc++.h>
using namespace std;

void pure_word(string s){
    for(int i = 0; i < s.size(); i++){
        if(!('0' <= s[i] && s[i] <= '9')) cout << s[i];
    }
    cout << '\n';
}

int main(){
    string s;
    while(cin >> s) pure_word(s);
}