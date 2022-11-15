#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char a[n][m];
    char b[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == b[i][j]){
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}