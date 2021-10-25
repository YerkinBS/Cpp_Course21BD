#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, height; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> height;
        if(height <= 437){
            cout << "Crash " << i;
            return 0;
        }
    }
    cout << "No crash";
}