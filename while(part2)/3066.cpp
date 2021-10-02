#include <bits/stdc++.h>
using namespace std;

int main(){
    double cnt = 0, summ = 0;
    while(true){
        int x; cin >> x;
        if(x == 0) break;
        cnt++; summ += x;
    }
    cout << fixed << setprecision(11) <<  double(summ / cnt);
}