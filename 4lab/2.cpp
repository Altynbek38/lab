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

    int mx = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > mx){
                mx = a[i][j];
            }
        }
    }
    int mxs = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mxs == mx){
            mxs = 0;
            }
            else if(a[i][j] >= mxs && a[i][j] < mx){
            mxs = a[i][j];
            }
           
        }

    }

    cout << mxs;

    return 0;
}