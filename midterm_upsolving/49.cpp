#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    string arr[101];
    string s, t;
    while(n--){
        cin >> s; t = s;
        s.erase(s.begin(), s.begin() + s.size() - 10);
        if(s == "@gmail.com"){
            t.erase(t.begin() + t.size() - 10, t.end());
            arr[cnt++] = t;
        }
    }
    for(int i = 0; i < cnt; i++) cout << arr[i] << '\n';
}