#include <bits/stdc++.h>
using namespace std;
map<int, bool> mp;

int main(){
    int n, m;
    cin >> n >> m;

    while(n--){
        int x; cin >> x;
        while(x--){
            int y; cin >> y;
            mp[y] = true;
        }
    }

    for(int i = 1; i <= m; i++){
        if(!mp[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}