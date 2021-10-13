#include <bits/stdc++.h>
using namespace std;

string Long_Word(string s){
    string t = "", f = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            if(t.size() > f.size()){
                f = t;
            }
            t = "";
        }
        else if(i + 1 == s.size()){
            t += s[i];
            if(t.size() > f.size()){
                f = t;
            }
        }
        else t += s[i];
    }
    return f;
}

int main(){
    string s; getline(cin, s);
    cout << Long_Word(s);
}