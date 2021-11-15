#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    int n; cin >> n;
    while(n--){
        string x; cin >> x;
        v.push_back(x);
    }


    // sort(v.rbegin(), v.rend());


    // if(v.empty()) cout << "Empty";
    // else cout << "Not empty";

    // v.erase(v.begin(), v.begin() + 3);

    // v.insert(v.begin() + 3, 99);
    
    // for(int i = 0; i < v.size(); i++){
    //     for(int j = 0; j < v[i].size(); j++) cout << v[i][j] << ' ';
    //     cout << '\n';
    // }

    for(auto i : v) cout << i << ' ';
}