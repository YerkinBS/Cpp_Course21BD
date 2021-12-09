#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int asc = 65, x;
    for(int i = 0; i < n; i++){
        x = n - i - 1;
        while(x--) cout << ' ';
        for(int j = 0; j <= i; j++){
            if(asc > 90) asc = 65;
            cout << char(asc++) << ' ';
        }
        cout << '\n';
    }
}