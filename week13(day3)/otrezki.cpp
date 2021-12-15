#include <bits/stdc++.h>
using namespace std;

bool check(string x){
    if(!(x[0] == '1' && x[x.size() - 1] == '1')) return false;
    int zero = 0;
    for(int i = 1; i < x.size() - 1; i++){
        if(x[i] == '0') zero++;
        else if(x[i] == '1') return false;
    }
    return zero >= 3;
}

int main(){
    string s, t; getline(cin, s);
    int i = 0, j, cnt = 0;
    while(i < s.size()){
        bool ok = false;
        if(s[i] == '1'){
            j = 5;
            while(j <= s.size()){
                t = s.substr(i, j++);
                if(check(t)){
                    cnt++;
                    i += j - 2;
                    ok = true;
                }
            }
        }
        if(!ok) i++;
    }
    cout << cnt;
}

