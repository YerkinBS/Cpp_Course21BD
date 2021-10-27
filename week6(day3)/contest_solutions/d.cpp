#include <bits/stdc++.h>
using namespace std;

char max_el(string x, int i, char mx){
    if(i == x.size()) return mx;
    if(x[i] > mx) return max_el(x, i + 1, x[i]);
    return max_el(x, i + 1, mx);
}

int main(){
    string s; cin >> s;
    cout << max_el(s, 0, '0');
}