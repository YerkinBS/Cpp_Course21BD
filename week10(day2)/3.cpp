#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;

    st.insert(9);
    st.insert(9);
    st.insert(9);
    st.insert(9);

    st.insert(3);
    st.insert(94);
    st.insert(956);
    st.insert(3453);
    st.insert(15);

    set<int> :: iterator it;
    for(it = st.begin(); it != st.end(); it++) cout << *it << ' ';
}