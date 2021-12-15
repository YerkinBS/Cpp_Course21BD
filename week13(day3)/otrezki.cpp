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
    int j = 5;

    int zero = 0, one = 0, cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            j = 5;
            while(j <= s.size()){
                t = s.substr(i, j++);
                if(check(t)) cnt++;
            }
        }
    }
    cout << cnt;
}

