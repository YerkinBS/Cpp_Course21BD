#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string t = "", s;
    while(n--){
        cin >> s;
        t += s + ' ';
    }
    if(t[0] >= 'a' and t[0] <= 'z') t[0] -= ' ';
    t[t.size() - 1] = '.';
    cout << t;
}