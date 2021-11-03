// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     int arr[n];
    
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] > arr[j]) swap(arr[i], arr[j]);
//         }
//     }

//     for(int i = 0; i < n; i++) cout << arr[i] << ' ';
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m; cin >> n >> m;
//     int arr[n][m];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             for(int x = 0; x < n; x++){
//                 for(int y = 0; y < m; y++){
//                     if(arr[i][j] < arr[x][y]) swap(arr[i][j], arr[x][y]);
//                 }
//             }
//         }
//     }
//     cout << "---------------------------\n";
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout << arr[i][j] << ' ';
//         }
//         cout << '\n';
//     }
    
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m; cin >> n >> m;
//     int arr[n][m];

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             for(int k = 0; k < m; k++){
//                 if(arr[i][j] < arr[i][k]) swap(arr[i][j], arr[i][k]);
//             }
//         }
//     }
//     cout << "--------------------------------\n";
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cout << arr[i][j] << ' ';
//         }
//         cout << '\n';
//     }
// }