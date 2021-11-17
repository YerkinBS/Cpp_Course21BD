#include <bits/stdc++.h>
using namespace std;

int main(){
    int salary; cin >> salary;
    int cash = 0, month = 0;

    while(cash < 500000){
        cash += salary * 0.3;
        salary += salary * 0.1;
        month++;
    }
    cout << month;
}