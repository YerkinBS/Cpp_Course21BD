#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        set<char> st;
        for(char a : s) st.insert(a);
        if(st.size() != s.size()){
            cout << "NO\n";
            continue;
        }
        sort(s.begin(), s.end());
        bool ok = true;
        for(int i = s[0] - '0'; i <= s[s.size() - 1] - '0'; i++){
            if(s.find(i + '0') == -1){
                cout << "NO\n";
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
    }
}