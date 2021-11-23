#include <bits/stdc++.h>
using namespace std;

void Rec(int n, int i){
    if(i > n) return;
    cout << i << ' ';
    Rec(n, i + 1);
}

int main(){
    int n; cin >> n;
    Rec(n, 1);
}