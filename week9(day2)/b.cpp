#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int digit, temp;
    bool has;
    vector<int> v;

    for(int i = 1; i <= n; i++){
        temp = i;
        has = false;
        while(temp){
            digit = temp % 10;
            if(digit == x && i == temp) has = true;
            else if(digit == x && i < 100) has = true;
            temp /= 10;
        }
        if(has) v.push_back(i);
    }
    for(auto i : v) cout << i << ' ';
}