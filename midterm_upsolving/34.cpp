#include <bits/stdc++.h>
using namespace std;

int main(){
    char first[15], second[15];
    for(int i = 0; i < 15; i++) cin >> first[i];
    for(int i = 0; i < 15; i++) cin >> second[i];

    int i = 0, pl_1 = 0, pl_2 = 0;
    while(i < 15){
        if(first[i] == 'S'){
            if(second[i] == 'R') pl_2++;
            if(second[i] == 'P') pl_1++;
        }
        if(first[i] == 'P'){
            if(second[i] == 'R') pl_1++;
            if(second[i] == 'S') pl_2++;
        }
        if(first[i] == 'R'){
            if(second[i] == 'S') pl_1++;
            if(second[i] == 'P') pl_2++;
        }
        i++;
    }
    if(pl_1 > pl_2) cout << "First player wins!";
    else if(pl_2 > pl_1) cout << "Second player wins!";
    else cout << "Friendship";
}