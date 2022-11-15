#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    int c = 0, d = 0;
    int sum = 0;
    for(int j = 0; j < m; j++){
        int mn = a[0][j];
        c = 1;
        d = j + 1;
        for(int i = 0; i < n; i++){
            if(mn == a[i][j]){
                mn = a[i][j];
                c = 1;
                d = j + 1;
            }
            else if(a[i][j] < mn){
                mn = a[i][j];
                c = i + 1;
                d = j + 1;
            }
            //sum = sum + mn;
        }
        sum = sum + mn;
        cout << c << ";" << d <<endl;
    }
    cout << endl;
    cout << "Their sum:" <<endl;
    cout << sum; 
   

    return 0;
}