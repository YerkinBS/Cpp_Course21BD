#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    double summ = 0;
    for(int i = 0; i < n; i++){
        double height; cin >> height;
        summ += height;
    }
    cout << summ / n;
}