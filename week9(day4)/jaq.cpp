#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> st; string num;
    int n, m, enough = 0; cin >> n >> m;
    while(m--){
        cin >> num;
        st.insert(num);
    }
    if(st.size() < n) cout << "Jaqs is mad";
    else{
        cout << "Jaqs likes it\n";
        map<int, vector<string>, greater<int>> mp;
        for(auto s : st){
            if(s.find('7') != -1 || s.find('J') != -1) mp[1].push_back(s);
            else mp[0].push_back(s);
        }
        for(auto el : mp){
            for(int i = 0; i < el.second.size(); i++){
                if(enough++ < n) cout << el.second[i] << ' ';
            }
        }
    }
}


