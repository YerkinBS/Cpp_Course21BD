#include <bits/stdc++.h>
using namespace std;

void print(int x){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << x;
        }
        cout << "\n";
    }
    cout << "-----------------------------------\n";
}

int main(){
    int n; cin >> n;
    print(n);
}