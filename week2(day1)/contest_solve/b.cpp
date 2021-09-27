#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, first, temp; cin >> n >> x;
    for(int i = 1; i <= n; i++){
        temp = i;
        while(temp > 0){
            first = temp % 10;
            temp /= 10;
        }
        if(first == x) cout << i << " ";
        else if(i % 10 == x) cout << i << " ";
    }
}