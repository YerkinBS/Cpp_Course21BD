#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int z; cin >> z;
    if(z > 0){
        for(int i = n - z; i < n; i++) cout << arr[i] << ' ';
        for(int i = 0; i < n - z; i++) cout << arr[i] << ' ';
    }
    else if(z < 0){
        z *= -1;
        for(int i = z; i < n; i++) cout << arr[i] << ' ';
        for(int i = 0; i < z; i++) cout << arr[i] << ' ';
    }
    else for(int i = 0; i < n; i++) cout << arr[i] << ' ';
}