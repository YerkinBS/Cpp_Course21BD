#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    string s;
    int x, y;
    while(cin >> s){
        if(s == "C") st.pop();
        else if(s == "D") st.push(st.top() * 2);
        else if(s == "+"){
            x = st.top();
            st.pop();
            y = st.top();
            st.push(x);
            st.push(x + y);
        }
        else st.push(stoi(s));
    }

    int summ = 0;
    while(!st.empty()){
        summ += st.top();
        st.pop();
    }
    cout << summ;
}