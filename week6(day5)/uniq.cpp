#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int n, x; cin >> n;
    while(n--){
        cin >> x;
        st.insert(x);
    }
    for(auto i : st) cout << i << " ";
}