#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    int mx = -99999;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x > mx) mx = x;
        }
    }
    cout << mx;
}