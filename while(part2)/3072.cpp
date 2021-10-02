#include <bits/stdc++.h>
using namespace std;

int main(){
    int mx = -999, cnt = 0;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        if(x > mx){
            mx = x;
            cnt = 1;
        }
        else if(x == mx) cnt++;
    }
    cout << cnt;
}