#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        if(x % 2 == 0) cnt++;
    }
    cout << cnt;
}