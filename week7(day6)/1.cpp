#include <bits/stdc++.h>
using namespace std;

void Rec(int n, int num = 1){
    if(num == n + 1) return;
    cout << num << ' ';
    Rec(n, num + 1);
}

int main(){
    int n; cin >> n;
    Rec(n);
}