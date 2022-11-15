#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m][2];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < 2; j++){
            cin >> b[i][j];
        }

    }

    for(int i = 0; i < m; i++){
        for(int k = b[i][0] - 1; k <= b[i][1] - 1; k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }

    return 0;
}