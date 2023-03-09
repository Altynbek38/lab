#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int ans = 1, sm = 0, row;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(a[i][j] > 0){
                cnt++;
            }
        }
        if(cnt > sm){
            sm = cnt;
            row = i + 1;
        }
        else if(cnt == sm){
            ans++;
        }
    }
    if(ans == n){
        cout << "Numbers are equal";
    }
    else{
        cout << row;
    }
    

    return 0;
}