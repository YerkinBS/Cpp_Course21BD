#include<iostream>
using namespace std;

void loh(int n){
    if(n == 0) return;
    loh(n / 2);
    cout << n % 2;
}

int main(){
    int n; cin>>n;
    loh(n);
}