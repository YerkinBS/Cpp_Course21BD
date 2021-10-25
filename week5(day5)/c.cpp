#include <bits/stdc++.h>
using namespace std;

bool Find(int arr[], int sz, int tar, int i){
    if(i == sz) return false;
    if(arr[i] == tar) return true;
    Find(arr, sz, tar, ++i);
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int target; cin >> target;

    if(Find(arr, n, target, 0)) cout << "Yes";
    else cout << "No";
}

