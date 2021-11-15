#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    multiset<int> mst;

    mst.insert(4);
    mst.insert(4);
    mst.insert(1);
    mst.insert(1);

    st.insert(4);
    st.insert(4);
    st.insert(1);
    st.insert(1);
    
    for(auto i : st) cout << i << ' ';
}