#include <bits/stdc++.h>
using namespace std;

void Get_Binary(int n, string ans = ""){
    if(n == 0){
        reverse(ans.begin(), ans.end());
        cout << ans;
        return;
    }
    Get_Binary(n / 2, ans += ((n % 2) + '0'));
}

int main(){
    int n; cin >> n;
    Get_Binary(n);
}

// 0001 <--> 1000