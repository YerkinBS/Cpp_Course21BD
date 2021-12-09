#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    for(int i = 2; i < x; i++){
        if(x % i == 0) return false;
    } 
    return true;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    int i = 2;
    while(v.size() != 1000){
        if(is_Prime(i)) v.push_back(i);
        i++;
    }
    vector<int> super;
    for(int i = 0; i < v.size(); i++){
        if(is_Prime(i + 1)) super.push_back(v[i]);
    }
    cout << super[n - 1];
}