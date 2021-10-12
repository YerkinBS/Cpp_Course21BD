#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    bool ok = true;
    int i = 0;
    int cnt = 1;
    int current = 0;
    while(i < s.size()){
        if(s[i] == s[i+1]) cnt++;
        else{
            if(current == 0){
                current = cnt;
                cnt = 1;
            }
            else{
                if(current == cnt) cnt = 1;
                else{
                    ok = false;
                    break;
                }
            }    
        }
        i++;
    }
    
    if(ok) cout << "YES";
    else cout << "NO";
}