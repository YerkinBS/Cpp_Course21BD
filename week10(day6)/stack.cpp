#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    string t;
    while(cin >> t){
        int num;
        if(t=="push"){
            cin >> num;
            st.push(num);
            cout << "ok" << endl;
        }
        else if(t=="pop"){
            if(!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
            else cout << "error" << endl;
        }
        else if(t=="back") {
            if(!st.empty()) cout << st.top() << endl;
            else cout << "error" << endl;
        }
        else if(t=="size") cout << st.size() << endl;
        else if(t=="clear"){
            while(st.size()!=0) st.pop();
            cout << "ok" << endl;
        }
        else if(t=="exit") {
            cout << "bye";
            return 0;
        }
    }
}