#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    int mx = -99999, sc_mx = -99999;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x > mx){
                sc_mx = mx;
                mx = x;
            }
            else if(x > sc_mx && x != mx) sc_mx = x;
        }
    }
    cout << (sc_mx != -99999 ? sc_mx : 0);
}