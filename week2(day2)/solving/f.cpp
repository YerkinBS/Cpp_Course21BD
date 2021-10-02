#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int summ = 0;
    for(int i = 0; i < n; i++){
        summ += (m + i * 10);
    }
    cout << summ / 60;
}