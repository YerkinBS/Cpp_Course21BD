#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int n, int x){
    for(int i = 0; i < n; i++){
        if(arr[i] == x) return true;
    }
    return false;
}

int main(){
    int n, x; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;

    if(find(arr, n, x)) cout << "Yes";
    else cout << "No";
}