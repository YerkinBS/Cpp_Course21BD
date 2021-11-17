#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    string part_2 = "";
    bool nonzero = false;
    for(int i = n - 1; i >= n / 2; i--){
        nonzero = false;
        for(int j = arr[i].size() - 1; j >= 0; j--){
            if(arr[i][j] == '0'){
                if(nonzero) part_2 += arr[i][j];
            }
            else{
                part_2 += arr[i][j];
                nonzero = true;
            }
        }
    }
    string part_1 = "";
    for(int i = 0; i < n / 2; i++) part_1 += arr[i];
    cout << (part_1 == part_2 ? "YES" : "NO");
}