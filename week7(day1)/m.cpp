#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n, x, summ = 0; cin >> n;
    while(n--){
        cin >> x;
        s.insert(x);
    }
    for(auto i : s) summ += i;
    cout << summ;
}