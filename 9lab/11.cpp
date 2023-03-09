#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }
    int mx1 = 0, mx2 = 0;

    for(int i = 0; i < n; i++){
        for(int j = i - 1; j >= 0; j--){
            if(i == 0){ 
                break;
            }
            if(v[i] <= v[j]){
                mx1 += v[i];
            }
            else{
                break;
            }
        }

        for(int k = i; k < n; k++){
            if(v[i] <= v[k]){
                mx1 += v[i];
            }
            else{
                break;
            }
        }
        if(mx1 > mx2){
            mx2 = mx1;
        }
        mx1 = 0;
    }
    cout << mx2 << endl;

    return 0;
}
































// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n, m;
//     cin >> n;
//     vector <int> v;
//     vector <int> u;
//     vector <int> r;

//     for(int i = 0; i < n; i++){
//         cin >> m;
//         v.push_back(m);
//         u.push_back(m);
//     }
//     sort(u.rbegin(), u.rend());

//     int index = 0;
//     for(int i = u[0]; i > 0; i--){
//         for(int j = 0; j < n; j++){
//             if(v[j] >= i){
//                 index++;
//             }
//             else{
//                 r.push_back(index * i);
//                 index = 0;
//             }
//         }
//         r.push_back(index * i);
//         index = 0;
//     }
//     sort(r.rbegin(), r.rend());
//     cout << r[0];

//     return 0;
// }