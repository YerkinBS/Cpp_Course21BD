#include <bits/stdc++.h>
using namespace std;
bool upper = false, lower = false, symbol = false;
string symb = "(.,:;?!*+%-@[]{}/_{}$#)";
vector<string> v;

bool latin(string x, bool ok = true){
    upper = false, lower = false, symbol = false;
    for(int i = 0; i < x.size(); i++){
        if(!isalpha(x[i])){
            if(symb.find(x[i]) == -1){
                if(!('0' <= x[i] && x[i] <= '9')) ok = false;
            }
            else symbol = true;
        }
        else{
            if(islower(x[i])) lower = true;
            else upper = true;
        }
    }
    return ok;
}

void output(){
    for(int i = 0; i < v.size(); i++){
        cout << i + 1 << ":\n" << v[i];
    }
}

int main(){
    int n; cin >> n;
    while(n--){
        string s, report = ""; cin >> s;
        if(!(8 <= s.size() && s.size() <= 14)) report += (s.size() > 14 ? "Password exceeds 14 characters.\n" : "Password less than 8 characters.\n");
        if(!latin(s)) report += "The password must consist of letters of the Latin alphabet.\n";
        if(!(upper && lower)) report += "The password must contain both lowercase and uppercase letters.\n";
        if(!symbol) report += "The password must contain the following characters: ( . , : ; ? ! * + % - @ [ ] { } / _ {} $ # ).\n";
        v.push_back((report.size() == 0 ? "Correct password.\n" : report));
    }
    output();
}