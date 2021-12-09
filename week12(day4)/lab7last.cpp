#include <bits/stdc++.h>
using namespace std;

char vert(int x){
    if(x > 9) return 'A' + x - 10;
    return x + '0';
}

void con(int n, int k){
    if(n == 0) return;
    con(n / k, k);
    cout << vert(n % k);
}

int main(){
    int n, k; cin >> n >> k;
    con(n, k);

    // stack<char> st;
    // while(n){
    //     st.push(vert(n % k));
    //     n /= k;
    // }

    // while(!st.empty()){
    //     cout << st.top();
    //     st.pop();
    // }
}