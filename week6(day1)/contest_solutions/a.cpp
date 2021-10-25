#include <bits/stdc++.h>
using namespace std;

int Rec(int arr[], int sz, int ans, int i, int mx){
    if(i == sz) return ans;
    if(mx == arr[i]) return Rec(arr, sz, ++ans, ++i, mx);
    return Rec(arr, sz, ans, ++i, mx);
}

int main(){
    int n, arr[1000];
    int cnt = 0, mx = -9999;
    while(true){
        cin >> n;
        if(n == 0) break;
        arr[cnt++] = n;
        if(mx < n) mx = n;
    }

    cout << Rec(arr, cnt, 0, 0, mx);
}