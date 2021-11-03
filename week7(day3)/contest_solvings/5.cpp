#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n; bool zero = false;
    while(cin >> n){
        if(zero) v.push_back(n);
        if(n == 0) zero = true;
    }
    reverse(v.begin(), v.end());
    for(auto i : v) cout << i << ' ';
}