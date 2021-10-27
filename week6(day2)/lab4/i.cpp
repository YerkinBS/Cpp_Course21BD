#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    bool ok = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int x = 2; x * x <= arr[i][j]; x++){
                if(x * x == arr[i][j]){
                    cout << x << ' ';
                    ok = true;
                }
            }
            if(!ok) cout << arr[i][j] << ' ';
            else ok = false;
        }
        cout << '\n';
    }
}