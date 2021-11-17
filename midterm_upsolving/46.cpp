#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    if(n == 0 || m == 0) cout << "error";
    else{
        int totals[n], best_total = 0; string student[n], best;
        for(int i = 0; i < n; i++) totals[i] = 0;
        for(int i = 0; i < n; i++){
            string name; cin >> name;
            student[i] = name;
            for(int j = 0; j < m; j++) {
                int total; cin >> total;
                totals[i] += total;
            }
            if(best_total < totals[i]) {
                best_total = totals[i];
                best = name;
            }
        }
        for(int i = 0; i < n; i++) cout << student[i] << " - " << totals[i] << '\n';
        cout << "The best:\n" << best << " " << best_total;
    }
}