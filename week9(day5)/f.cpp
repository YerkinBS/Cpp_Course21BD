#include <bits/stdc++.h>
using namespace std;

bool valid(int n, int cnt){
    return cnt >= n;
}

int main(){
    string s; int n;
    cin >> s >> n;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9') cnt++;
    }
    if(valid(n, cnt)) cout << "YES";
    else cout << "NO";
}