#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, mx_word = "";
    while(cin >> s){
        if(s.size() > mx_word.size()) mx_word = s;
    }
    cout << mx_word;
}