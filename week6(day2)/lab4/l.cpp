#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j =0; j < m; j++) cin >> arr[i][j];
    }

    int mn = 99999, summ = 0, x, y;
    cout << "coordinates of min elements:\n";

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(arr[i][j] < mn){
                x = i + 1;
                y = j + 1;
                mn = arr[i][j];
            }
        }
        summ += mn;
        cout << x << ';' << y << '\n';
        mn = 99999;
    }
    cout << "Their sum:\n" << summ;
}