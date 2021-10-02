#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int first, temp;
    for(int i = 1; i <= n; i++){
        temp = i;
        while(temp){
            first = temp % 10;
            temp /= 10;
        }
        if(first == x || x == i % 10) cout << i << " ";
    }
}