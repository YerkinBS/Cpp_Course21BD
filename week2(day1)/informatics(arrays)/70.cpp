#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    if(n % 2 != 0){
        for(int i = 0; i < n - 1; i += 2){
            swap(arr[i], arr[i+1]);
        }
    }
    else{
        for(int i = 0; i < n; i += 2){
            swap(arr[i], arr[i+1]);
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}