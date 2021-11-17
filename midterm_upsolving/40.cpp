#include <bits/stdc++.h>
using namespace std;
int x, y;

bool valid(){
    return 0 <= x && x <= 7 && 0 <= y && y <= 7;
}

bool beats(int i, int j){
    return (i == x && j != y) || (i != x && j == y) || 
    (abs(i - x) == 1 && abs(j - y) == 1) || 
    i + j == x + y || i - j == x - y;
}

int main(){
    cin >> x >> y;
    if(valid()){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(i == x && j == y) cout << 1 << ' ';
                else if(beats(i, j)) cout << 2 << ' ';
                else cout << '*' << ' ';
            }
            cout << '\n';
        }
    }
    else cout << "Impossible";
}