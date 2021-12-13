#include <bits/stdc++.h>
using namespace std;

struct PLayer{
    int hp = 100;
    string name;
    int record = 0;
};

int main(){
    PLayer player;

    player.name = "Ayazhan";

    while(player.hp--) player.record++;

    cout << player.name << ' ' << player.record;  
}