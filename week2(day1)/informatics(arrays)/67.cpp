#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++){
        if(i == 0){
            if((arr[i] >= 0 and arr[i+1] >= 0) or (arr[i] < 0 and arr[i+1] < 0)){
                cout << "YES";
                return 0;
            }
        }
        else if(i + 1 == n){
            if((arr[i] >= 0 and arr[i-1] >= 0) or (arr[i] < 0 and arr[i-1] < 0)){
                cout << "YES";
                return 0;
            }
        }
        else{
            if((arr[i] >= 0 and arr[i-1] >= 0) or (arr[i] < 0 and arr[i-1] < 0)){
                cout << "YES";
                return 0;
            }
            if((arr[i] >= 0 and arr[i+1] >= 0) or (arr[i] < 0 and arr[i+1] < 0)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}