#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> arr;

void roadmap(){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}

bool map_outside(int a){
    return a > 9 || a < 0;
}

int main(){
    int hero_x, hero_y; cin >> hero_x >> hero_y;
    int thief_x, thief_y; cin >> thief_x >> thief_y;

    for(int i = 0; i < 10; i++){
        vector<char> row;
        for(int j = 0; j < 10; j++){
            if(i == hero_x && j == hero_y) row.push_back('H');
            else if(i == thief_x && j == thief_y) row.push_back('T');
            else row.push_back('_');
        }
        arr.push_back(row);
    }

    string steps; cin >> steps;
    for(int i = 0; i < steps.size(); i++){
        if(hero_x == thief_x && hero_y == thief_y){
            cout << "The thief is caught!\n";
            arr[thief_x][thief_y] = '$';
            roadmap();
            return 0;
        }
        if(steps[i] == 'R'){
            if(map_outside(hero_y + 1)){
                cout << "The thief is too far away!";
                return 0;
            }
            arr[hero_x][hero_y++] = '*';
            arr[hero_x][hero_y] = 'H';
        }
        if(steps[i] == 'L'){
            if(map_outside(hero_y - 1)){
                cout << "The thief is too far away!";
                return 0;
            }
            arr[hero_x][hero_y--] = '*';
            arr[hero_x][hero_y] = 'H';
        }
        if(steps[i] == 'U'){
            if(map_outside(hero_x - 1)){
                cout << "The thief is too far away!";
                return 0;
            }
            arr[hero_x--][hero_y] = '*';
            arr[hero_x][hero_y] = 'H';
        }
        if(steps[i] == 'D'){
            if(map_outside(hero_x + 1)){
                cout << "The thief is too far away!";
                return 0;
            }
            arr[hero_x++][hero_y] = '*';
            arr[hero_x][hero_y] = 'H';
        }
    }

    if(hero_x == thief_x && hero_y == thief_y){
        cout << "The thief is caught!\n";
        arr[thief_x][thief_y] = '$';
        roadmap();
        return 0;
    }

    cout << "The hero gave up\n";
    roadmap();
}