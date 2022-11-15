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
    int m, cnt;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(a[i][j] == a[j][i]){
                    cnt++;
                }
            }
            
        }
    }
    if(cnt == n){
        cout << "Perfect";
    }
    else{
        cout << "Not perfect";
    }
    return 0;
}