#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        if (s % 10 == 7) cnt++;
    }
    cout << cnt;
    return 0;
}