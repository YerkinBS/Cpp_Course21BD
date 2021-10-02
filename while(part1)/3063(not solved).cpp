#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, p, y; cin >> x >> p >> y;
    int years = 0;
    while(x < y){
        x += x * 0.01 * p;
        years++;
    }
    cout << years;
}