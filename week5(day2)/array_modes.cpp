#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);
    reverse(arr, arr + n);

    int cnt = 1, mx_cnt = -9999;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]) cnt++;
        else{
            if(mx_cnt < cnt) mx_cnt = cnt;
            cnt = 1;
        }
    }
    if(mx_cnt < cnt){
        mx_cnt = cnt;
    }
    cnt = 1;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]) cnt++;
        else{
            if(cnt == mx_cnt) cout << arr[i] << " ";
            cnt = 1;
        }
    }
    if(mx_cnt == cnt){
        cout << arr[n - 1];
    }
}

