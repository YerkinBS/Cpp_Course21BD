#include <bits/stdc++.h>
using namespace std;
char x = 'A';

int main(){
    int n; cin >> n;
    char arr[n][n], i = 0, j = 0, num = 1;

    while(num <= n * n){
        while(j <= n - 1 - i)
            arr[i][j++] = x;
            x++;
            num++;
        i++; j--;
        while(i <= j)
            arr[i++][j] = x;
            x++;
            num++;
        i--; j--;
        while(j >= n - 1 - i)
            arr[i][j--] = x;
            x++;
            num++;
        i--; j++;
        while(i >= j + 1)
            arr[i--][j] = x;
            x++;
            num++;
        i++; j++;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}