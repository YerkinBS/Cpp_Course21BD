#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, d; cin >> n >> a >> d;
    int summ = 0;
    int i = 1;
    while(i <= n){
        cout << a << " ";
        summ += a;
        a += d;
        i++;
    }
    cout << "\n" << summ;
}