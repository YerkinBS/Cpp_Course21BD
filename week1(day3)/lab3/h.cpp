#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r; cin >> n >> l >> r;
    int arr[n], summ = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i >= l - 1 and i <= r){
            summ += arr[i];
        }
    }
    cout << summ;
}