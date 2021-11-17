#include <bits/stdc++.h>
using namespace std;

bool IsPalindromePermut(string x, int cnt, int exc){
    for(int i = 0; i < x.size(); i++){
        cnt = 0;
        for(int j = 0; j < x.size(); j++){
            if(x[i] == x[j]) cnt++;
        }
        if(cnt == 1) exc++;
        if(cnt % 2 != 0 && exc > 1) return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    cout << (IsPalindromePermut(s, 0, 0) ? "Luffy is the pirate king!" : "Onepiece");
}