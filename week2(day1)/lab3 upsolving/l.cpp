#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];

    int c[n+m];
    for(int i = 0; i < n + m; i++){
        if(i < n) c[i] = a[i];
        else if(i >= n) c[i] = b[i - n];
    }

    for(int i = 0; i < n + m; i++){
        for(int j = i + 1; j < n + m; j++){
            if(c[i] > c[j]) swap(c[i], c[j]);
        }
    }

    for(int i = 0; i < n + m; i++) cout << c[i] << " ";
}