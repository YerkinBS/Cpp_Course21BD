#include <bits/stdc++.h>
using namespace std;

double GetPriceQualityRatio(double price, double quality){
    return quality / price;
}

int main(){
    int n; cin >> n;
    string name, best_phone;
    double best_ratio = -9999, ratio, p, q;
    while(n--){
        cin >> name >> p >> q;
        ratio = GetPriceQualityRatio(p, q);
        if(best_ratio < ratio){
            best_ratio = ratio;
            best_phone = name;
        }
    }
    cout << best_phone;
}