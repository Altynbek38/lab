#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    char a[n][m];
    int b[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
            sum += b[i][j];
        }
    }

    if(sum /(n * m) == 7){
        cout << "YES";
    }

    return 0;
}