#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    for(int i = 0; i < n; i++){
        if(i == a - 1){
            for(int j = b - 1; j >= a - 1; j--){
                arr[(a - 1) + j] = arr[j];
            }
        }
        else if(i == c - 1){
            for(int k = d - 1; k >= c - 1; k--){
                arr[(c - 1) + k] = arr[k];
            }
        }
        // else if ((i < a - 1 || i >= b) && (i < c - 1 || i >= d)) cout << arr[i] << " ";
    }

    for(auto i : arr) cout << i << " ";
}