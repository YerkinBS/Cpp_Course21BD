#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char z; cin >> z;
    if(z == 'k'){
        int c; cin >> c;
        double nn = n;
        cout << fixed << setprecision(c) << nn / 1024;
    }
    else cout << n * 1024;
}