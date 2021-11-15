#include <bits/stdc++.h>
using namespace std;

char convert_ch(int x){
    if(x >= 10) return 'A' + x - 10;
    return x + '0';
}

void convert(int n, int k, string ans){
    if(n == 0){
        reverse(ans.begin(), ans.end());
        cout << ans;
        return;
    }
    ans += convert_ch(n % k);
    cout << n % k << '\n';
    convert(n / k, k, ans);
}

int main(){
    int n, k; cin >> n >> k;
    convert(n, k, "");
}