#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }

    for(int i = 1; i < v.size(); i++){
        if(v[i] > v[i-1]) cout << v[i] << ' ';
    }
}