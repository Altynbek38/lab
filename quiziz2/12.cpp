#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, limit;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cin >> limit;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > limit){
                cout << "Penalty!";
                return 0;
            }
        }
    }

    cout << "No penalty for today.";

    return 0;
}