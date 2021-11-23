#include <bits/stdc++.h>
using namespace std;

int Summ(int arr[], int size, int i){
    if(i == size) return 0;
    return arr[i] + Summ(arr, size, i + 1);
}

int main(){
    int n, arr[1000], size = 0;
    while(true){
        cin >> n;
        if(n == 0) break;
        arr[size] = n;
        size++;
    }
    cout << Summ(arr, size, 0);
}