#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int mx = a[i][0];
        for(int j = 0; j < n; j++){
            if(a[i][j] > mx){
                mx = a[i][j];
            }
        }
        for(int k = 0; k < n; k++){
            a[i][k] = mx;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}