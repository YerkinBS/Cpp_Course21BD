#include <bits/stdc++.h>
using namespace std;
map<string, double> mp;
map<string, int> cnt;
double gen_sum = 0, stud;
int n, m;
string city;

int main(){
    cin >> n;
    while(n--){
        cin >> m;
        while(m--){
            cin >> city >> stud;
            gen_sum += stud;
            cnt[city] += stud;
        }
    }
    cout << "\n------------------------------------\n";
    for(auto i : cnt) mp[i.first] = (i.second * 100) / gen_sum;
    for(auto i : mp) cout << i.first << ' ' << i.second << '\n';
}