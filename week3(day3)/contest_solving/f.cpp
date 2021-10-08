#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int n; cin >> n;
    int cnt = 0;
    string t = "";
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != ' ' && i != s.size()){
            t += s[i];
        }
        else{
            cnt++;
            if(cnt == n){
                cout << t;
                return 0;
            }
            else{
                t = "";
            }
        }
    }
}