#include <bits/stdc++.h>
using namespace std;

int main(){
    int prev, cnt = 0; cin >> prev;
    while(prev != 0){
        int next; cin >> next;
        if(next != 0 and next > prev) cnt++;
        prev = next;
    }
    cout << cnt;
}