#include <bits/stdc++.h>
using namespace std;

void arr_sort(int arr[], int size){
    if(size == 1) return;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] < arr[i + 1]) swap(arr[i], arr[i + 1]); 
    }
    arr_sort(arr, size - 1);
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++) cout << arr[i] << ' ';
}

int main(){
    int arr[1000], sz = 0;
    while(true){
        int n; cin >> n;
        if(n == 0) break;
        arr[sz++] = n;
    }

    arr_sort(arr, sz);
    print_arr(arr, sz);
}