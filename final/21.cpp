#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n;

    for(int i = 2; i <= n; i++){
        bool ok = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                ok = false;
            }
        }
        if(ok){
            k = n - i;
            for(int l = 2; l < k; l++){
                if(k % l == 0){
                    ok = false;
                }
            }
        }
        if(ok){
            cout << i << " " << k;
            return 0;
        }
    }



    return 0;
}