#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j < i; j++) cout << " ";
        for(j = 1; j <= (n * 2 - (2 * i - 1)); j++){
            if(i == 1 || j == 1 || j == (n * 2 - (2 * i - 1))) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}