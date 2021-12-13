#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, OC, OF, OD, CS, CB, CM, CD;
    cin >> d >> OC >> OF >> OD >> CS >> CB >> CM >> CD;

    int O_cost = OC + (OD * (d - OF));
    int C_cost = CB + (CM + (d / CS)) + (CD * d);

    cout << (O_cost <= C_cost ? "Online Taxi" : "Classic Taxi");
}