#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, summ = 0; cin >> n;
    for(int i = 1; i <= n; i++) summ += i;
    cout << summ;
}