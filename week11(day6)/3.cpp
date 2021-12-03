#include <bits/stdc++.h>
using namespace std;
int n, m; char arr[1000][1000];

void vert(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}

void horiz(){
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((i == 0 || i == n - 1) && (j == 0 || j == m - 1)) arr[i][j] = '*';
            else if(i == 0 || i == n - 1) arr[i][j] = '-';
            else if(j == 0 || j == m - 1) arr[i][j] = '|';
            else arr[i][j] = '0';
        }
    }
    vert();
    // horiz();
}