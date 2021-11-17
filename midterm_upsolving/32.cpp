#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char x;
    int h_cnt = 0, o_cnt = 0, d_cnt = 0;

    while(n--){
        cin >> x;
        if(x == 'H') h_cnt++;
        else if(x == 'D') d_cnt++;
        else o_cnt++;
    }

    cout << "Orks: " << o_cnt / 3;
    cout << "\nDragons: " << d_cnt / 3;
    cout << "\nHumans: " << h_cnt / 3;
}