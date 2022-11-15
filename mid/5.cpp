#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int a[n][m];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                a[i][j] = cnt;
                cnt++;
            }
        }
        else if(i % 2 == 1){
            for(int j = m - 1 ; j >= 0; j--){
                a[i][j] = cnt;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == x - 1 && j == y - 1){
                cout << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}