#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i == 0) continue;
        if(arr[i] > arr[i-1]) cnt++;
    }
    cout << cnt;
}