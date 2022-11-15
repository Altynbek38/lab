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
    int maxnum = a[1][0];
    int maxi, maxj;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxnum){
                maxnum = a[i][j];
                maxi = i + 1;
                maxj = j + 1;
            }
        
        }
    }
    cout << maxi << " " << maxj;

    return 0;
}