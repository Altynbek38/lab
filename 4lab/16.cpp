#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    int sum = 0;
    int j = n - 1;
    for(int i = 0; i < n; i++){
        sum = sum + a[i][j];
        j--;
    }
    cout << sum;
    return 0;
}