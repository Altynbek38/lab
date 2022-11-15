#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i + j - 1 == n){
                sum = sum + a[i][j];
            }
            
        }
    }
    cout << sum;
    return 0;
}