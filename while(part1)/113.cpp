#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a = 1;
    while(a * a <= n){
        cout << a * a << "\n";
        a++;
    }
}