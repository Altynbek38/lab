#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i + j - 1 == n){
                a[i][j] = i;
                cout << a[i][j];
            }
            else{
                cout << ".";
            }
            
        }
        cout << endl;
    }


    return 0;
}