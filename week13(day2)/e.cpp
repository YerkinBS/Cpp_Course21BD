#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n - 1];
    for(int i = 0; i < n - 1; i++){
        int x; cin >> x;
        arr[i] = x;
    }
    int sm = 0, a, b;
    cin >> a >> b;
    for(int i = a - 1; i < b - 1; i++) sm += arr[i];
    cout << sm;
}