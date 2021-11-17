#include <bits/stdc++.h>
using namespace std;

bool IsPerfectNumber(int num){
    return num % 3 == 0;
}

int main(){
    int cnt = 0, n;
    while(cin >> n){
        if(IsPerfectNumber(n)) cnt++;
        else break;
    }
    cout << cnt;
}