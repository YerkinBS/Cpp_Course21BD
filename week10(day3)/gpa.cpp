#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    double tot_points = 0, summ_of_cred = 0, x;
    for(int i = 0; i < n; i++){
        for(int i = 1; i <= 4; i++){
            cin >> x;
            if(i != 4) tot_points += x;
            else summ_of_cred += x;
        }
    }
    cout << tot_points / summ_of_cred;
}