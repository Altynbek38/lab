#include <iostream>
using namespace std;
int main(){
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int mn = 100, index;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum + a[i][j];
        }
        if(sum < mn){
            index = i + 1;
            mn = sum;
        }
        
    }

    cout << index;

    return 0;
}