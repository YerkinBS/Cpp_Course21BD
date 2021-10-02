#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n + 1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int h; cin >> h;
    arr[n] = h;
    sort(arr, arr + n + 1);
    reverse(arr, arr + n + 1);
    int ans;
    for(int i = 0; i < n + 1; i++){
        if(arr[i] == h){
            ans = i + 1;
        }
    }
    cout << ans;
}