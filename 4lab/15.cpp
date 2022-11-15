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
    int mx = a[0][0], c = 1, d =1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           if(i == j){
                if(a[i][j] > mx){
                mx = a[i][j];
                c = i + 1;
                d = j + 1;
                }
           }
        }
    }

    cout << "Maximum element is: " << mx << " with coordinates: " << c << ";" << d;


    return 0;
}