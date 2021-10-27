#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int mx = -99999, pos_I, pos_J, x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x > mx){
                mx = x;
                pos_I = i + 1;
                pos_J = j + 1;
            }
        }
    }
    cout << pos_I << " " << pos_J;
}