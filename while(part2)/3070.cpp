#include <bits/stdc++.h>
using namespace std;

int main(){
    int mx = -999, sc_mx = 0;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        if(mx < x){
            sc_mx = mx;
            mx = x;
        }
        else if(x > sc_mx) sc_mx = x;
    }
    cout << sc_mx;
}