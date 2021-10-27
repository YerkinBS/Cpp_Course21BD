#include <bits/stdc++.h>
using namespace std;

int Even_Count(string x, int i, int cnt){
    if(i == x.size()) return cnt;
    if((x[i] - '0') % 2 == 0) return Even_Count(x, ++i, ++cnt);
    return Even_Count(x, ++i, cnt);
}

int main(){
    string s; cin >> s;
    cout << Even_Count(s, 0, 0);
}