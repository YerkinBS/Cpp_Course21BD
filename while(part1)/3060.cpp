#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int power = 1;
    while(power <= n){
        if(power == n){
            cout << "YES";
            return 0;
        }
        power *= 2;
    }
    cout << "NO";
}