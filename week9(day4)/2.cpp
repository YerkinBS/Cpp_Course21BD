#include <bits/stdc++.h>
using namespace std;

void Print_Arr(int arr[], int size, int i){
    if(i == size) return;
    cout << arr[i] << ' ';
    Print_Arr(arr, size, i + 1);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    Print_Arr(arr, 5, 0);
}