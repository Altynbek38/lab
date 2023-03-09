#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        bool ok = true;
        int m, mn = 10000, pos;
        cin >> m;
        int a[m];
        for(int j = 0; j < m; j++){
            cin >> a[j];
        }
        for(int k = 0; k < m; k++){
            ok = true;
            if(a[k] != 0){
                for(int l = k + 1; l < m; l++){
                    if(a[k] == a[l]){
                        a[l] = 0;
                        ok = false;
                    }
                }
            }
            else{
                ok = false;
            }
            if(ok = true && a[k] < mn && a[k] != 0){
                mn = a[k];
                pos = k + 1;
            }
        }
        if(mn == 10000){
            cout << "ZA WARUDO" << endl;
        }
        else{
            cout <<mn << " " << pos << endl;
        }
    }

    return 0;
}