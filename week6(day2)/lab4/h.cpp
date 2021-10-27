#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int min_sum = 99999, x, sum = 0, ans;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            cin >> x;
            sum += x;
        }
        if(sum < min_sum){
            min_sum = sum;
            ans = i + 1;
        }
    }
    cout << ans;
}