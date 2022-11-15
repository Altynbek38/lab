#include <iostream>
using namespace std;
int main(){
    int n, num = 1;
    cin >> n;
    int a[n][n];
   
    if(n ==1){
        cout << 1;
        return 0;
    }

    for(int dif = 0; dif <= n - 2; dif++){
        for(int i = 0 + dif; i < n - dif; i++){
            a[0 + dif][i] = num;
            num++;
        }
        num--;
        for(int i = 0 + dif; i < n - dif; i++){
            a[i][n - 1 - dif] = num;
            num++;
        }
        num--;
        for(int i = n - 1 - dif; i >= 0 + dif; i--){
            a[n - 1 - dif][i] = num;
            num++;
        }
        num--;
        for(int i = n - 1 - dif; i >= 1 + dif; i--){
            a[i][0 + dif] = num;
            num++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}