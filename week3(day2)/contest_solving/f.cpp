#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];
    int el = 1;
    for(int j = n - 1; j >= 0; j--){
        for(int i = n - 1; i >= 0; i--){
            arr[i][j] = el++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}