#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, m, y; cin >> d >> m >> y;
    if(m >= 1 && m <= 12){
        if(y < 1970 || y > 2035){
            cout << "NO";
            return 0;
        }
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
            if(d < 1 || d > 31){
                cout << "NO";
                return 0;
            }
        }else if(m == 2){
            if(d < 1 || d > 28){
                cout << "NO";
                return 0;
            }
        }else{
            if(d < 1 || d > 30){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else cout << "NO";
}