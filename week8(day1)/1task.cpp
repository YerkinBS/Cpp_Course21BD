#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        mp[x]++;
    }
    map<int, int> :: iterator it;
    int mx = -9999;
    for(it = mp.begin(); it != mp.end(); it++){
        if(mx < it -> second) mx = it -> second;
    }
    
    int mx_ans = -999;
    for(it = mp.begin(); it != mp.end(); it++){
        if(mx == it -> second){
            if(mx_ans < it -> first) mx_ans = it -> first;
        }
    }
    cout << mx_ans;
}