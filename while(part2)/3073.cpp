#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, summ = 0, prev; cin >> prev;
    while(prev != 0 and x != 0){
        cin >> x;
        prev = x;
        summ += x;
    }
    cout << summ;
}