#include <bits/stdc++.h>
using namespace std;

int Rec(int n, int ans, int cnt){     // n - степень двойки cnt - счетчик, для проверки степени n
    if(n == cnt) return ans;          // ans - ответ, то есть 2 ^ n
    return Rec(n, ans * 2, cnt + 1);    
}

// задача: рекурсивно найти 2 ^ n

int main(){
    int n; cin >> n;
    
    cout << Rec(n, 1, 0);
}
