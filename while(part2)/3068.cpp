#include <bits/stdc++.h>
using namespace std;

int main(){
    int mx = -999;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        if(mx < x) mx = x;
    }
    cout << mx;
}