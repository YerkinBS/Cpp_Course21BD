#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    if(s.size() % 2 != 0) cout << -1;
    else{
        int upp = 0, low = 0;
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] && s[i] <= 'z') low++;
            else upp++;
        }
        int cnt = 0;

        if(low > upp){
            while(low != upp){
                upp++; low--;
                cnt += 1;
            }
        }
        else{
            while(low != upp){
                upp--; low++;
                cnt += 2;
            }
        }
        cout << cnt;
    }
}

