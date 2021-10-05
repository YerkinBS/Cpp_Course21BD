#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m >> x;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == x){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}