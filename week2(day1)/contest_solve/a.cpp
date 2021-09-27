#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int summ, prod, x, digit;
    while(n--){
        cin >> x;
        summ = 0; prod = 1;
        while(x){
            digit = x % 10;
            prod *= digit;
            summ += digit;
            x /= 10;
        }
        cout << summ << " " << prod << "\n";
    }
}