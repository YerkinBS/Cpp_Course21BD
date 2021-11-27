#include <iostream>
#include <stack>
using namespace std;

bool is_Square(int n){
    for(int i = 4; i <= 9; i++){
        if(i * i == n) return true;
    }
    return false;
}

int main(){
    stack<char> st;
    string str, f, s, num; cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(st.empty()){
            st.push(str[i]);
            continue;
        }
        f = st.top();
        s = str[i];
        num = f + s;
        if(is_Square(stoi(num))) st.pop();
        else st.push(str[i]);
    }

    if(st.empty()) cout << "Stack is empty";
    else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
}