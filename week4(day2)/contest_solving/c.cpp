#include <bits/stdc++.h>
using namespace std;

int Elements_Sum(int arr[], int size, int res = 0){
    for(int i = 0; i < size; i++) res += arr[i];
    return res;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << Elements_Sum(a, n);
}