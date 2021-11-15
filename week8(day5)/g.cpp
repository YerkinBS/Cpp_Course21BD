#include <bits/stdc++.h>
using namespace std;
void rec(int arr[],int i){
    if(i < 0) return;
    cout<<arr[i] << ' ';
return rec(arr,i-1);
}

int main(){
    int n,arr[1000],cnt=0;
    while(cin>>n){
        if(n==0) break;
        arr[cnt++]=n;
    }
    rec(arr,cnt-1);
}