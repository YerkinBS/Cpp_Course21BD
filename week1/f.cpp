#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int summ = 0;
    for(int i = 1; i <= n; i++){
        summ += i;
    }
    cout << summ;
}