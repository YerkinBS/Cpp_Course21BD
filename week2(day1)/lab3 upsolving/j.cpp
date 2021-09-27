#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tar; cin >> n >> tar;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ind = 0;
    for(int i = 0; i < n; i++){
        if(tar >= arr[i]) ind = i + 1;
    }
    cout << ind;
}