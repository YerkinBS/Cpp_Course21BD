#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int pos = 1, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        if(mx < arr[i]){
            mx = arr[i];
            pos = i + 1;
        }
    }
    cout << pos;
}