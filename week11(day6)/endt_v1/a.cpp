#include <bits/stdc++.h>
using namespace std;
int x, y;
map<pair<int, int>, int> mp;

int main(){
    int n; cin >> n;
    while(n--){
        cin >> x >> y;
        cout << (x >= y ? mp[{x, y}]++ : mp[{y, x}]++) << '\n';
    }
}