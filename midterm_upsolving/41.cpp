#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, summ, mx_sum = -9999; cin >> n >> m;
    for(int i = 0; i < n; i++){
        summ = 0;
        for(int j = 0; j < m; j++){
            cin >> x; summ += x;
        }
        if(summ > mx_sum) mx_sum = summ;
    }
    cout << mx_sum;
}