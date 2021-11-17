#include <bits/stdc++.h>
using namespace std;

int One_Bit_Count(int x){
    int cnt = 0;
    while(x){
        if(x % 2 == 1) cnt++;
        x /= 2;
    }
    return cnt;
}

int main(){
    int n, i = 0; cin >> n;
    while(i < n + 1) cout << One_Bit_Count(i++);
}