#include <bits/stdc++.h>
using namespace std;

void Rec(int n, int sz, int num, int print){
    while(print--){
        cout << num << ' ';
        sz++;
        if(n == sz) return;
    }
    Rec(n, sz, ++num, num);
}

int main(){
    int n; cin >> n;
    Rec(n, 0, 1, 1);
}