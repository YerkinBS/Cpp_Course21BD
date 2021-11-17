#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, summ; cin >> n >> m;
    int ans[n];
    for(int i = 0; i < n; i++){
        summ = 0;
        for(int j = 0; j < m; j++){
            cin >> x; summ += x;
        }
        ans[i] = summ / m;
    }
    for(int i = 0; i < n; i++) cout << ans[i] << ' ';
}