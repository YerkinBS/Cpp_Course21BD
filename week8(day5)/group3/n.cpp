#include <bits/stdc++.h>
using namespace std;

bool AntiPlagiat(int arr[], int size, int ind, int k){
    if(ind == size) return true;
    if(abs(arr[ind] - arr[ind - 1]) <= k) return false;
    return AntiPlagiat(arr, size, ind + 1, k);
}

int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    
    if(AntiPlagiat(arr, n, 1, k)) cout << "no";
    else cout << "cheater";
}