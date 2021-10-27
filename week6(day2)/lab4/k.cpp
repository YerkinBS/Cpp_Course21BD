#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    int summ = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            summ += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << summ << '\n';
        summ = 0;
    }

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            summ += arr[i][j];
        }
        cout << "The sum of column number " << j + 1 << " is " << summ << '\n';
        summ = 0;
    }
}