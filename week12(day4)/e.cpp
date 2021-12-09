// $$$STACK$$$
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<char> st;
//     string s, t = ""; cin >> s;
//     for(char x : s) st.push(x);

//     while(!st.empty()){
//         t += st.top();
//         st.pop();
//     }

//     cout << (s == t ? "YES" : "NO");
// }


// $$$QUEUE$$$
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<char> q;
//     string s, t = ""; cin >> s;
//     for(char x : s) q.push(x);
//     reverse(s.begin(), s.end());

//     while(!q.empty()){
//         t += q.front();
//         q.pop();
//     }

//     cout << (s == t ? "YES" : "NO");
// }


// $$$DEQUE$$$
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<char> deq;
    string s; cin >> s;
    for(char x : s) deq.push_back(x);

    while(deq.size() >= 2){
        if(!(deq.front() == deq.back())){
            cout << "NO";
            return 0;
        }
        deq.pop_back();
        deq.pop_front();
    }
    cout << "YES";
}