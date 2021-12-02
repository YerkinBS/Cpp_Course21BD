#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> even, odd;
    while(n--){
        int x; cin >> x;
        if(x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    sort(even.rbegin(), even.rend());
    sort(odd.begin(), odd.end());

    for(int i = 0; i < even.size(); i++) cout << even[i] << ' ';
    for(int i = 0; i < odd.size(); i++) cout << odd[i] << ' ';
}