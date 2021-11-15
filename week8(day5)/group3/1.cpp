#include <bits/stdc++.h>
using namespace std;
int arr[100], ind = 0;

void rec(int n){
    if(n == 0) return;
    int x; cin >> x;
    arr[ind] = x;
    ind++;
    rec(n - 1);
}

int main(){
    int n; cin >> n;
    rec(n);

    for(int i = 0; i < ind; i++) cout << arr[i] << ' ';
}