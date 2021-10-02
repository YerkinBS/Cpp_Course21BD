#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n;
    int mn = 9999;
    while(n--){
        cin >> x;
        if(mn > x) mn = x;
    }
    cin >> m;
    while(m--){
        cin >> x;
        if(x % mn == 0) cout << x << " ";
    }
}

// int n = 5;
// while(n--) == for(int i = 0; i < n; i++)
// while(n--) Работает n итерации
// пока n не равен 0
// while(n > 0){ 
//  n -= 1;
//}

//while(n--)