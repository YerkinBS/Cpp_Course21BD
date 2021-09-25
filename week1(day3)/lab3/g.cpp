#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(mn > arr[i]) mn = arr[i];
        if(mx < arr[i]) mx = arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == mx) cout << mn << " ";
        else cout << arr[i] << " ";
    }
}