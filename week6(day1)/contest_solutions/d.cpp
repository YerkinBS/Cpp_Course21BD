#include <bits/stdc++.h>
using namespace std;

int Rec(int n, int ans, int num){
    if(num == n) return ans;
    return Rec(n, ans + num, ++num);
}

int main(){
    int n; cin >> n;
    cout << Rec(n, 0, 0);
}



