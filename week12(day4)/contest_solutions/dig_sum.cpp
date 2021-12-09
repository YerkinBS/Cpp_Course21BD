#include <bits/stdc++.h>
using namespace std;
int x, y, z;

int main(){
    int n; cin >> n;
    int i = 100;
    while(i < 1000){
        x = i / 100, y = (i / 10) % 10, z = i % 10;
        if(x + y + z == n) cout << i << '\n';
        i++;
    }
}