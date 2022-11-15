#include <bits/stdc++.h>
using namespace std;

void transpose(int n, int m){
    cin >> n >> m;
    int b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n, m;
    
 
    transpose(n, m);
    return 0;
}