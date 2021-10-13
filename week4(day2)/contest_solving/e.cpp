#include <bits/stdc++.h>
using namespace std;

void picasso(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 or i + 1 == n){
                if(j == 0 or j + 1 == m) cout << '+';
                else cout << '-';
            }
            else{
                if(j == 0 or j + 1 == m) cout << '|';
                else cout << " ";
            }
        }
        cout << "\n";
    }
}

int main(){
    int n, m; cin >> n >> m;
    picasso(n , m);
}