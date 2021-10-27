#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n], num = 1, i = 0, j = 0;

    while(num <= n * n){
        while(j <= n - 1 - i) arr[i][j++] = num++;
        i++; j--;

        while(i <= j) arr[i++][j] = num++;
        i--; j--;

        while(j >= n - 1 - i) arr[i][j--] = num++;
        i--; j++;

        while(i >= j + 1) arr[i--][j] = num++;
        i++; j++;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}