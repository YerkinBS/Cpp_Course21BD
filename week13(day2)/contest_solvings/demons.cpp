#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        v.push_back(x);
    }
    int r, l; cin >> r >> l;

    int vis = -999, cnt = 0;
    for(int i = r; i <= l; i++){
        if(v[i] > vis){
            vis = v[i];
            cnt++;
        }
    }
    cout << cnt;
}