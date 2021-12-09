#include <bits/stdc++.h>
using namespace std;
int arr[9999], n;

void BubbleSort(){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]) swap(arr[i], arr[j]);
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arr[i] = x;
    }
    BubbleSort();

    int mx_diff = 0;
    for(int i = 0; i < n - 1; i++){
        if(abs(arr[i] - arr[i + 1]) > mx_diff) mx_diff = abs(arr[i] - arr[i + 1]);
    }
    cout << mx_diff;
}