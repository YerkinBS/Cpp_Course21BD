#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        s.insert(x);
    }
    for(auto i : s) if(i % 2 == 1) cout << i << ' ';
}