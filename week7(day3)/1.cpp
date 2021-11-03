#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        vector<int> el;
        while(x--){
            int z; cin >> z;
            el.push_back(z);
        }
        v.push_back(el);
    }
    cout << "-------------------------------\n";
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}


// 5  n

//  5
// 1 2 34 5 6
//  1
//  6
//  4
// 1 2 3 4
//  2
// 6 5
//  3
// 89 65 321


// [[1, 2, 34, 5, 6], [6], [1, 2, 3, 4], [6, 5], [89, 65, 321]]