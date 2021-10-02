#include <bits/stdc++.h>
using namespace std;

int main(){
    int summ = 0;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        summ += x;
    }
    cout << summ;
}