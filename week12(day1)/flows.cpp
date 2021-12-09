#include <bits/stdc++.h>
using namespace std;
map<double, int> mp;
string name, surname;
double point, x, cnt;
int checker = 1;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cnt = 0; cin >> x;
        for(double j = 1; j <= x; j++){
            cin >> name >> surname >> point;
            cnt += point;
        }
        mp[cnt / x] = i;    
    }
    for(auto i : mp){
        if(1 == checker) cout << "The " << i.second << " flow is the most fucked up.\n";
        else if(n == checker) cout << "The " << i.second << " flow is the most bada$$.";
        checker++;
    }
}