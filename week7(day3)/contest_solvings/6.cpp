#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    int m; cin >> m;
    char c;
    while(m--){
        cin >> c;
        if(c == '+'){
            int ind, el;
            cin >> ind >> el;
            v.insert(v.begin() + ind, el);
        }
        else{
            int ind; cin >> ind;
            v.erase(v.begin() + ind, v.begin() + ind + 1);
        }
    }
    for(auto i : v) cout << i << ' ';
}