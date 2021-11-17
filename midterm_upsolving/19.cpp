#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    bool five; 
    int temp, digit;
    while(a <= b){
        five = false;
        temp = a;
        while(temp){
            digit = temp % 10;
            if(digit == 5){
                five = true;
                break;
            }
            temp /= 10;
        }
        if(five) cout << a << ' ';
        a++;
    }
}