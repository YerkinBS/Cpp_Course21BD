#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt; getline(cin, txt);
    string t, s, f; cin >> t >> s >> f;
    
    string changed = "";
    int i = 0;
    while(i < txt.size()){
        cout << "txt.substr(" << i <<  ", " << t.size() << ") = " << txt.substr(i, t.size()) << '\n';
        if(txt.substr(i, t.size()) == t){
            changed += s;
            i += t.size();
        }
        else changed += txt[i++];
        cout << "Current changed txt = " << changed << '\n';
    }

    int cnt = 0;
    for(int i = 0; i < changed.size(); i++){
        if(changed.substr(i, f.size()) == f) cnt++;
    }
    cout << cnt;
}