#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k; cin >> k;

    int mn_dist = 9999, ind;
    for(int i = 0; i < n; i++){
        if(abs(k - arr[i]) < mn_dist){
            mn_dist = abs(k - arr[i]);
            ind = i;
        }
    }
    cout << ind;
}