#include <bits/stdc++.h>
using namespace std;

int findNthNumber(int a[], int x, int n){
    int diff = 0, ans = 0, cnt = x;
    bool found = false;
    if(a[0] != 1){
        diff = a[0]-1;
        if (diff >= cnt) return cnt;
        cnt -= diff;
    }
    for(int i = 0 ; i < n - 1; i++){  
        diff = 0;
        if((a[i] + 1) != a[i + 1]){
            diff += (a[i + 1] - a[i]) - 1;
            if(diff >= cnt){
                ans = a[i] + cnt;
                found = true;
                break;
            }
            else cnt -= diff;
        }
    }
    if(found) return ans;
    else return  -1;
}

int main(){
    int arr[51], i = 0, A_i;
    while(cin >> A_i) arr[i++] = A_i;
    int x; x = arr[--i];
    cout << findNthNumber(arr, x, i);
}