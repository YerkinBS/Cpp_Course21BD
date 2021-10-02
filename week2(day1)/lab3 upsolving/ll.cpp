#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int p = n + m;
    int c[p];
    for(int i = 0; i < p; i++){
        if(i < n) c[i] = a[i];
        else if(i >= n) c[i] = b[i-n];
    }

    sort(c, c + p);

    for(int i = 0; i < p; i++) cout << c[i] << " ";
}