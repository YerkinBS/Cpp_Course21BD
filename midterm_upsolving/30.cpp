#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arr[i] = char(x);
    }
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
}