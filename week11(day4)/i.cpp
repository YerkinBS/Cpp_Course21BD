#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, bool> mp;
    int n; cin >> n;
    while(n--){
        string x; cin >> x;
        if(!mp[x]){
            cout << "new user added\n";
            mp[x] = true;
        }
        else cout << "user already exists\n";
    }
}