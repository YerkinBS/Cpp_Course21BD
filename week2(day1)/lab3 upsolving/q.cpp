#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    for(int i = 2; i < x; i++){
        if(x == 0 || x == 1){
            cout << "No";
            return 0;
        }
        if(x == 2){
            cout << "Yes";
            return 0;
        }
        if(x % i == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}