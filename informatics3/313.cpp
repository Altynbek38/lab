#include <bits/stdc++.h>
using namespace std;
// int binom(int n, int k){
//     int d = n - k + 1;
//     int resn = 1, resk = 1, resd = 1;
//     for(int i = d; i <= n; i++){
//         resn *= i;
//     }
//     for(int i = 1; i <= k; i++){
//         resk *= i;
//     }
//     // for(int i = 1; i <= d; i++){
//     //     resd *= i;
//     // }

//     return resn / resk;
// }

long long binom(int n){
    long long res = 1;
    for(int i = n; i > 0; i--){
        res *= i;
    }
    return res;
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << binom(n) / (binom(k) * binom(n - k));
    return 0;
}