#include <iostream>
using namespace std;
int main(){
    int n, m, sum;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum + a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is "<< sum << endl; 
    }

    for(int j =0; j < m; j++){
        sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + a[i][j];
            
        }
        cout << "The sum of column number " << j + 1 << " is "<< sum << endl;
    }

    return 0;
}