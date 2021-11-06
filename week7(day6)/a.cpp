#include <bits/stdc++.h>
using namespace std;

int Summ(int n, int num){
    if(num == n) return num;
    return num + Summ(n, num + 1);
}

void Print_Arr(int arr[], int ind){
    if(ind < 0) return;
    cout << arr[ind] << ' ';
    Print_Arr(arr, ind - 1);
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    Print_Arr(arr, n - 1);

    // for(int i = n - 1; i >= 0; i--) cout << arr[i] << ' ';
}