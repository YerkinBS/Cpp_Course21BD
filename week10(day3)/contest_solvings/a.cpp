#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    int x = n * m;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i % 2 == 0) arr[i][j] = x--;
            else arr[n - j - 1][i] = x--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}