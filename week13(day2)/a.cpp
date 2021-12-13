#include <bits/stdc++.h>
using namespace std;
int T, n, num, x, y, z;

bool check(vector<int> v){
    bool ok_x = true;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % x != 0){
            ok_x = false; break;
        }
    }
    if(!ok_x){
        bool ok_y = true;
        for(int i = 0; i < v.size(); i++){
            if(v[i] % y != 0){
                ok_y = false; break;
            }
        }
        if(!ok_y){
            bool ok_z = true;
            for(int i = 0; i < v.size(); i++){
                if(v[i] % z != 0){
                    ok_z = false; break;
                }
            }
            if(!ok_z) return false;
            return true;
        }
        return true;
    }
    return true;
}

int main(){
    cin >> T;

    while(T--){
        cin >> n >> x >> y >> z;
        vector<int> v;
        while(n--){
            cin >> num;
            v.push_back(num);
        }
        cout << (check(v) ? "She can\n" : "She can't");
    }
}