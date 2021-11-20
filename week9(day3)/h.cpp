#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    int cnt = 1, prev_cnt = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]) cnt++;
        else{
            if(prev_cnt == 0){
                prev_cnt = cnt;
                cnt = 1;
            }
            else{
                if(cnt != prev_cnt){
                    cout << "NO";
                    return 0;
                }
                else{
                    prev_cnt = cnt;
                    cnt = 1;
                }
            }
        }
    }
    if(cnt != 1){
        if(cnt != prev_cnt){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}