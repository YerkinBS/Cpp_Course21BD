#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int x;

bool Possible_sum(int num, int real_num){
    if(num == x) return true;
    if(num > x) return false;
    return Possible_sum(num + real_num, real_num);
}

int main(){
    int n; cin >> n >> x;
    
    while(n--){
        int num; cin >> num;
        if(Possible_sum(num, num)){
            int cnt = 0, real_num = num;
            while(num != x){
                cnt++;
                num += real_num;
            }
            v.push_back(to_string(cnt));
        }
        else v.push_back("impossible");
    }
    for(string s : v) cout << s << '\n';
}