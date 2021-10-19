#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int cnt = 0, seq = 0;

    for(char x = 'a'; x <= 'z'; x++){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == x) cnt++;
        }
        if(seq % 2 == 0){
            cout << x << " " << cnt << "\n";
        }
        else{
            cout << cnt << " " << x << "\n";
        }
        cnt = 0;
        seq++;
    }
}