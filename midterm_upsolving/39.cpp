#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> v;
int cnt[1000][1000], n, m;
int di[8] = {1, 1, 1, -1, -1, -1, 0, 0}; 
int dj[8] = {-1, 0, 1, -1, 0, 1, -1, 1}; 

bool inside(int x, int y) { 
    return 0 <= x && x < n && 0 <= y && y < m; 
} 
 
void fill(int x, int y) { 
    for(int i = 0; i < 8; i++) { 
        int to_x = x + di[i]; 
        int to_y = y + dj[i]; 
        if(inside(to_x, to_y)) cnt[to_x][to_y]++;   
    } 
} 

void desk(){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            if(v[i][j] == '.' && cnt[i][j] > 0){
                v[i][j] = cnt[i][j] + '0';
            }
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<char> row;
        for(int j = 0; j < m; j++) row.push_back('.');
        v.push_back(row);
    }
    int k; cin >> k;
    while(k--){
        int x, y; cin >> x >> y;
        v[x][y] = '*';
        cnt[x][y] = 1;
        fill(x, y);
    }
    desk();
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}