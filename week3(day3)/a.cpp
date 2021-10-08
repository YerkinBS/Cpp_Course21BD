#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int Upper_cnt = 0, Low_cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') Upper_cnt++;
        else if(s[i] >= 'a' && s[i] <= 'z') Low_cnt++;
    }
    cout << Low_cnt << " " << Upper_cnt;
}