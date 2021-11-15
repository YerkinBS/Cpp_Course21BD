#include <bits/stdc++.h>
using namespace std;

void Highest_Pow_2(int x){
    int num = 1;
    while(num * 2 < x) num *= 2;
    cout << num << ' ';
}

int main(){
    map<int, int> mp; int x;
    while(cin >> x) mp[x]++;
    for(auto i : mp){
        if(i.second == 1 && i.first != 1) Highest_Pow_2(i.first);
    }
}