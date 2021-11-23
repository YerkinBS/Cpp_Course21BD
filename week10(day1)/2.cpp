#include <bits/stdc++.h>
using namespace std;

int Rec(int n, int summ){
    if(n == 0) return summ;
    return Rec(n - 1, summ + n);
}

int main(){
    int n; cin >> n;
    cout << Rec(n, 0);
}