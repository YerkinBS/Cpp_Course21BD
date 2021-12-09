#include <bits/stdc++.h>
using namespace std;

int main(){
    string x, s = "", t = "";
    for(int i = 0; i < 9; i++){
        cin >> x; s += x; t += x;
    }
    reverse(s.begin(), s.end());
    cout << (s == t ? "YES" : "NO");
}