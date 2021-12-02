#include <bits/stdc++.h>
using namespace std;
map<string, string> log_pass;
string login, password;

int main(){
    int n; cin >> n;
    while(n--){
        cin >> login >> password;
        log_pass[login] = password;
    }

    int m; cin >> m;
    while(m--){
        cin >> login >> password;
        if(log_pass[login].size() != 0){
            if(log_pass[login] == password) cout << "correct password";
            else cout << "password error";
        }
        else cout << "login error";
    }
}