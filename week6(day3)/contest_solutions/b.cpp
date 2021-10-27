#include <bits/stdc++.h>
using namespace std;

void zip_2(int arr[], int size, int i){
    if(i == size) return;
    if(arr[i] == 0) cout << arr[i]  << ' ';
    zip_2(arr, size, ++i);
}

void zip_1(int arr[], int size, int i){
    if(i == size){
        zip_2(arr, size, 0);
        return;
    }
    if(arr[i] != 0) cout << arr[i] << ' ';
    zip_1(arr, size, ++i); 
}

int main(){
    int n, arr[1000], sz = 0;
    while(cin >> n) arr[sz++] = n;
    zip_1(arr, sz, 0);
}